# generated from test_communication/test/test_requester_replier.py.in

import os
import sys
import time

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction

import launch_testing

import unittest


SERVICE_TYPES = 'Arrays;BasicTypes;Empty'.split(';')


@launch_testing.parametrize('service_type', SERVICE_TYPES)
def generate_test_description(service_type, ready_fn):
    namespace = '/test_time_%s' % time.strftime('%H_%M_%S', time.gmtime())

    launch_description = LaunchDescription()

    requester_cmd = ['/opt/workspace/src/ros2/system_tests/test_communication/test/requester_py.py', service_type, namespace]
    replier_cmd = ['/opt/workspace/build/test_communication/test_replier_cpp', service_type, namespace]

    replier_env = dict(os.environ)
    requester_env = dict(os.environ)

    if 'rclcpp' == 'rclpy':
        replier_cmd.insert(0, sys.executable)
        replier_env['PYTHONUNBUFFERED'] = '1'
    if 'rclpy' == 'rclpy':
        requester_cmd.insert(0, sys.executable)
        requester_env['PYTHONUNBUFFERED'] = '1'

    replier_env['RCL_ASSERT_RMW_ID_MATCHES'] = 'rmw_cyclonedds_cpp'
    replier_env['RMW_IMPLEMENTATION'] = 'rmw_cyclonedds_cpp'

    launch_description.add_action(ExecuteProcess(
        cmd=replier_cmd,
        name='test_replier',
        env=replier_env,
    ))

    requester_env['RCL_ASSERT_RMW_ID_MATCHES'] = 'rmw_cyclonedds_cpp'
    requester_env['RMW_IMPLEMENTATION'] = 'rmw_cyclonedds_cpp'

    requester_process = ExecuteProcess(
        cmd=requester_cmd,
        name='test_requester',
        env=requester_env,
    )
    launch_description.add_action(requester_process)

    launch_description.add_action(
        OpaqueFunction(function=lambda context: ready_fn())
    )
    return launch_description, locals()


class TestRequesterReplier(unittest.TestCase):

    def test_requester_finishes_in_a_finite_amount_of_time(self, proc_info, requester_process):
        """Test that the second executable terminates after a finite amount of time."""
        proc_info.assertWaitForShutdown(process=requester_process, timeout=10)


@launch_testing.post_shutdown_test()
class TestRequesterReplierAfterShutdown(unittest.TestCase):

    def test_processes_finished_gracefully(self, proc_info):
        """Test that both executables finished gracefully."""
        launch_testing.asserts.assertExitCodes(
            proc_info,
            [launch_testing.asserts.EXIT_OK],
            'test_requester'
        )
        launch_testing.asserts.assertExitCodes(
            proc_info,
            process='test_replier'
        )
