# generated from test_communication/test/test_publisher_subscriber.py.in

import os
import sys
import time

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction

import launch_testing

import unittest


MESSAGE_TYPES = 'Arrays;BasicTypes;BoundedSequences;Builtins;Constants;Defaults;Empty;MultiNested;Nested;Strings;UnboundedSequences;WStrings'.split(';')


@launch_testing.parametrize('message_type', MESSAGE_TYPES)
def generate_test_description(message_type, ready_fn):
    namespace = '/test_time_%s' % time.strftime('%H_%M_%S', time.gmtime())

    launch_description = LaunchDescription()

    publisher_cmd = ['/opt/workspace/src/ros2/system_tests/test_communication/test/publisher_py.py', message_type, namespace]
    subscriber_cmd = ['/opt/workspace/build/test_communication/test_subscriber_cpp', message_type, namespace]

    publisher_env = dict(os.environ)
    subscriber_env = dict(os.environ)

    if 'rclpy' == 'rclpy':
        publisher_cmd.insert(0, sys.executable)
        publisher_env['PYTHONUNBUFFERED'] = '1'
    if 'rclcpp' == 'rclpy':
        subscriber_cmd.insert(0, sys.executable)
        subscriber_env['PYTHONUNBUFFERED'] = '1'

    publisher_env['RCL_ASSERT_RMW_ID_MATCHES'] = 'rmw_fastrtps_cpp'
    publisher_env['RMW_IMPLEMENTATION'] = 'rmw_fastrtps_cpp'

    launch_description.add_action(ExecuteProcess(
        cmd=publisher_cmd,
        name='test_publisher',
        env=publisher_env,
    ))

    subscriber_env['RCL_ASSERT_RMW_ID_MATCHES'] = 'rmw_fastrtps_cpp'
    subscriber_env['RMW_IMPLEMENTATION'] = 'rmw_fastrtps_cpp'

    subscriber_process = ExecuteProcess(
        cmd=subscriber_cmd,
        name='test_subscriber',
        env=subscriber_env,
    )
    launch_description.add_action(subscriber_process)
    launch_description.add_action(
        OpaqueFunction(function=lambda context: ready_fn())
    )
    return launch_description, locals()


class TestPublisherSubscriber(unittest.TestCase):

    def test_subscriber_terminates_in_a_finite_amount_of_time(self, proc_info, subscriber_process):
        """Test that the subscriber terminates after a finite amount of time."""
        proc_info.assertWaitForShutdown(process=subscriber_process, timeout=10)


@launch_testing.post_shutdown_test()
class TestPublisherSubscriberAfterShutdown(unittest.TestCase):

    def test_processes_finished_gracefully(self, proc_info):
        """Test that both executables finished gracefully."""
        launch_testing.asserts.assertExitCodes(
            proc_info,
            [launch_testing.asserts.EXIT_OK],
            'test_subscriber'
        )
        launch_testing.asserts.assertExitCodes(
            proc_info,
            process='test_publisher'
        )
