# generated from test_communication/test/test_action_client_server.py.in

import os
import sys
import time

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction

import launch_testing

import unittest


ACTION_TYPES = 'Fibonacci;NestedMessage'.split(';')


@launch_testing.parametrize('action_type', ACTION_TYPES)
def generate_test_description(action_type, ready_fn):
    namespace = '/test_time_%s' % time.strftime('%H_%M_%S', time.gmtime())

    launch_description = LaunchDescription()

    action_client_cmd = ['/opt/workspace/src/ros2/system_tests/test_communication/test/action_client_py.py', action_type, namespace]
    action_server_cmd = ['/opt/workspace/build/test_communication/test_action_server_cpp', action_type, namespace]

    action_server_env = dict(os.environ)
    action_client_env = dict(os.environ)

    if 'rclcpp' == 'rclpy':
        action_server_cmd.insert(0, sys.executable)
        action_server_env['PYTHONUNBUFFERED'] = '1'
    if 'rclpy' == 'rclpy':
        action_client_cmd.insert(0, sys.executable)
        action_client_env['PYTHONUNBUFFERED'] = '1'

    action_server_env['RCL_ASSERT_RMW_ID_MATCHES'] = 'rmw_cyclonedds_cpp'
    action_server_env['RMW_IMPLEMENTATION'] = 'rmw_cyclonedds_cpp'

    launch_description.add_action(ExecuteProcess(
        cmd=action_server_cmd,
        name='test_action_server',
        env=action_server_env,
    ))

    action_client_env['RCL_ASSERT_RMW_ID_MATCHES'] = 'rmw_fastrtps_cpp'
    action_client_env['RMW_IMPLEMENTATION'] = 'rmw_fastrtps_cpp'

    action_client_process = ExecuteProcess(
        cmd=action_client_cmd,
        name='test_action_client',
        env=action_client_env,
    )
    launch_description.add_action(action_client_process)

    launch_description.add_action(
        OpaqueFunction(function=lambda context: ready_fn())
    )
    return launch_description, locals()


class TestActionClientServer(unittest.TestCase):

    def test_client_finishes_in_a_finite_amount_of_time(self, proc_info, action_client_process):
        """Test that the second executable terminates after a finite amount of time."""
        proc_info.assertWaitForShutdown(process=action_client_process, timeout=10)


@launch_testing.post_shutdown_test()
class TestActionClientServerAfterShutdown(unittest.TestCase):

    def test_processes_finished_gracefully(self, proc_info):
        """Test that both executables finished gracefully."""
        launch_testing.asserts.assertExitCodes(
            proc_info,
            [launch_testing.asserts.EXIT_OK],
            'test_action_client'
        )
        launch_testing.asserts.assertExitCodes(
            proc_info,
            process='test_action_server'
        )
