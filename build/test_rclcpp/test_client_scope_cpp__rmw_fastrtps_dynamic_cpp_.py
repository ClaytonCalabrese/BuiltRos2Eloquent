# generated from test_rclcpp/test/test_two_executables.py.in

import os

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction
from launch.substitutions import LaunchConfiguration

import launch_testing
import launch_testing.asserts

import unittest


def generate_test_description(ready_fn):
    launch_description = LaunchDescription()

    cmd = ['/opt/workspace/build/test_rclcpp/test_client_scope_server_cpp']
    if '':
      cmd += ''.split(' ')
    env = None
    if '':
        env = dict(os.environ)
        env['RMW_IMPLEMENTATION'] = ''
    executable_1 = ExecuteProcess(
        cmd=cmd,
        name='test_client_scope_server_cpp',
        env=env,
        sigterm_timeout=LaunchConfiguration('sigterm_timeout', default=30)
    )
    launch_description.add_action(executable_1)

    cmd = ['/opt/workspace/build/test_rclcpp/test_client_scope_client_cpp']
    if '':
      cmd += ''.split(' ')
    env = None
    if '':
        env = dict(os.environ)
        env['RMW_IMPLEMENTATION'] = ''
    executable_2 = ExecuteProcess(
        cmd=cmd,
        name='test_client_scope_client_cpp',
        env=env,
        sigterm_timeout=LaunchConfiguration('sigterm_timeout', default=30)
    )

    launch_description.add_action(executable_2)

    launch_description.add_action(
        OpaqueFunction(function=lambda context: ready_fn())
    )
    return launch_description, locals()


class TestTwoExecutables(unittest.TestCase):

    def test_client_scope_cpp(self, executable_2):
        """Test that the second executable terminates after a finite amount of time."""
        self.proc_info.assertWaitForShutdown(process=executable_2, timeout=60)


@launch_testing.post_shutdown_test()
class TestTwoExecutablesAfterShutdown(unittest.TestCase):

    def test_client_scope_cpp(self, proc_info):
        """Test that both executables finished cleanly."""
        launch_testing.asserts.assertExitCodes(
            proc_info,
            [launch_testing.asserts.EXIT_OK],
            'test_client_scope_client_cpp'
        )
        launch_testing.asserts.assertExitCodes(
            proc_info,
            process='test_client_scope_server_cpp'
        )
