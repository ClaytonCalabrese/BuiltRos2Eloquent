# generated from rcl/test/test_rmw_impl_id_check.py.in

import os

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction

import launch_testing
import launch_testing.actions
import launch_testing.asserts
import launch_testing.util

import unittest

@launch_testing.parametrize(
    'rmw_implementation_env,rcl_assert_rmw_id_matches_env',
    [
        # Test RMW_IMPLEMENTATION only.
        ('rmw_cyclonedds_cpp', None),
        ('garbage', None),
        ('', None),
        # Test RCL_ASSERT_RMW_ID_MATCHES only.
        (None, 'garbage'),
        (None, ''),
        # Test both.
        ('rmw_cyclonedds_cpp', 'rmw_cyclonedds_cpp'),
        ('garbage', 'rmw_cyclonedds_cpp'),
        ('rmw_cyclonedds_cpp', 'garbage'),
        ('garbage', 'garbage'),
        ('', ''),
    ]
)
def generate_test_description(
    rmw_implementation_env,
    rcl_assert_rmw_id_matches_env,
):
    launch_description = LaunchDescription()

    env = dict(os.environ)
    if rmw_implementation_env is not None:
        env['RMW_IMPLEMENTATION'] = rmw_implementation_env
    if rcl_assert_rmw_id_matches_env is not None:
        env['RCL_ASSERT_RMW_ID_MATCHES'] = rcl_assert_rmw_id_matches_env

    executable_under_test = ExecuteProcess(
        cmd=['/opt/workspace/build/rcl/test/test_rmw_impl_id_check_exe'],
        name='/opt/workspace/build/rcl/test/test_rmw_impl_id_check_exe',
        env=env,
    )
    launch_description.add_action(executable_under_test)
    # Keep the test fixture alive till tests end.
    launch_description.add_action(launch_testing.util.KeepAliveProc())
    launch_description.add_action(
        launch_testing.actions.ReadyToTest()
    )
    return launch_description, locals()

class TestRMWImplementationIDCheck(unittest.TestCase):

    def test_process_terminates_in_a_finite_amount_of_time(self, executable_under_test, proc_info):
        """Test that executable under test terminates in a finite amount of time."""
        proc_info.assertWaitForShutdown(process=executable_under_test, timeout=10)

@launch_testing.post_shutdown_test()
class TestRMWImplementationIDCheckAfterShutdown(unittest.TestCase):

    def test_process_terminates_as_expected(
        self,
        proc_info,
        executable_under_test,
        rmw_implementation_env,
        rcl_assert_rmw_id_matches_env
    ):
        """Test that the executable under test terminates as expected."""
        assertion_method = self.assertEqual
        if 'garbage' in (rmw_implementation_env, rcl_assert_rmw_id_matches_env):
            assertion_method = self.assertNotEqual
        executable_info = proc_info[executable_under_test]
        assertion_method(executable_info.returncode, launch_testing.asserts.EXIT_OK)
