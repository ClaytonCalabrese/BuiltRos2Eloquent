# generated from test_rclcpp/test/test_executable_output.py.in
# generated code does not contain a copyright notice

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction

import launch_testing
import launch_testing.asserts
import launch_testing_ros

import unittest


def generate_test_description(ready_fn):
    launch_description = LaunchDescription()
    proc_under_test = ExecuteProcess(
        cmd=['/opt/workspace/build/test_rclcpp/test_signal_handler'],
        name='test_signal_handler',
        sigterm_timeout='15',
        output='screen'
    )
    launch_description.add_action(proc_under_test)
    launch_description.add_action(
        OpaqueFunction(function=lambda context: ready_fn())
    )
    return launch_description, locals()


class TestExecutableOutput(unittest.TestCase):

    def test_signal_handler_before_shutdown(self, proc_output, proc_under_test):
        output_filter = launch_testing_ros.tools.basic_output_filter(
            filtered_rmw_implementation='rmw_fastrtps_dynamic_cpp'
        )
        proc_output.assertWaitFor(
            expected_output=launch_testing.tools.expected_output_from_file(
                path='/opt/workspace/src/ros2/system_tests/test_rclcpp/test/test_signal_handler_before_shutdown__trigger_shutdown'
            ), process=proc_under_test, output_filter=output_filter, timeout=10
        )


@launch_testing.post_shutdown_test()
class TestExecutableOutputAfterShutdown(unittest.TestCase):

    def test_signal_handler_before_shutdown(self, proc_output, proc_under_test):
        output_filter = launch_testing_ros.tools.basic_output_filter(
            filtered_rmw_implementation='rmw_fastrtps_dynamic_cpp'
        )
        launch_testing.asserts.assertInStdout(
            proc_output,
            expected_output=launch_testing.tools.expected_output_from_file(
                path='/opt/workspace/src/ros2/system_tests/test_rclcpp/test/test_signal_handler_before_shutdown__expected_output'
            ), process=proc_under_test, output_filter=output_filter
        )
