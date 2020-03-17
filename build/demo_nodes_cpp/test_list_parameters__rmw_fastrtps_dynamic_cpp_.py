# generated from demo_nodes_cpp/test/test_executables_tutorial.py.in
# generated code does not contain a copyright notice

import os

import unittest

from launch import LaunchDescription
from launch.actions import ExecuteProcess

import launch_testing
import launch_testing.actions
import launch_testing.asserts
import launch_testing.util
import launch_testing_ros


def generate_test_description():
    os.environ['OSPL_VERBOSITY'] = '8'  # 8 = OS_NONE
    # bare minimum formatting for console output matching
    os.environ['RCUTILS_CONSOLE_OUTPUT_FORMAT'] = '{message}'

    launch_description = LaunchDescription()
    processes_under_test = [
        ExecuteProcess(cmd=[executable], name='test_executable_' + str(i), output='screen')
        for i, executable in enumerate('/opt/workspace/build/demo_nodes_cpp/list_parameters'.split(';'))
    ]
    for process in processes_under_test:
        launch_description.add_action(process)
    launch_description.add_action(launch_testing.util.KeepAliveProc())
    launch_description.add_action(
        launch_testing.actions.ReadyToTest()
    )
    return launch_description, locals()


class TestExecutablesTutorial(unittest.TestCase):

    def test_processes_output(self, proc_output, processes_under_test):
        """Test all processes output against expectations."""
        from launch_testing.tools.output import get_default_filtered_prefixes
        output_filter = launch_testing_ros.tools.basic_output_filter(
            filtered_prefixes=get_default_filtered_prefixes() + [
                'service not available, waiting again...'
            ],
            filtered_rmw_implementation='rmw_fastrtps_dynamic_cpp'
        )
        output_files = '/opt/workspace/src/ros2/demos/demo_nodes_cpp/test/list_parameters'.split(';')
        for process, output_file in zip(processes_under_test, output_files):
            proc_output.assertWaitFor(
                expected_output=launch_testing.tools.expected_output_from_file(
                    path=output_file
                ), process=process, output_filter=output_filter, timeout=30
            )
        # TODO(hidmic): either make the underlying executables resilient to
        # interruptions close/during shutdown OR adapt the testing suite to
        # better cope with it.
        import time
        time.sleep(5)

@launch_testing.post_shutdown_test()
class TestExecutablesTutorialAfterShutdown(unittest.TestCase):

    def test_last_process_exit_code(self, proc_info, processes_under_test):
        """Test last process exit code."""
        launch_testing.asserts.assertExitCodes(
            proc_info,
            process=processes_under_test[-1]
        )
