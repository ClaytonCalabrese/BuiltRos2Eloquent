# generated from rcl/test/test_two_executables.py.in

import os

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction

import launch_testing
import launch_testing.actions
import launch_testing.asserts

import unittest


def generate_test_description():
    launch_description = LaunchDescription()

    launch_description.add_action(
        ExecuteProcess(
            cmd=['/opt/workspace/build/rcl/test/service_fixture__rmw_fastrtps_cpp'],
            name='service_fixture',
        )
    )

    executable_under_test = ExecuteProcess(
        cmd=['/opt/workspace/build/rcl/test/client_fixture__rmw_fastrtps_cpp', 'service_fixture'],
        name='client_fixture',
    )
    launch_description.add_action(executable_under_test)

    launch_description.add_action(
        launch_testing.actions.ReadyToTest()
    )
    return launch_description, locals()


class TestTwoExecutables(unittest.TestCase):

    def test_services(self, executable_under_test, proc_info):
        """Test that the executable under test terminates after a finite amount of time."""
        proc_info.assertWaitForShutdown(process=executable_under_test, timeout=10)


@launch_testing.post_shutdown_test()
class TestTwoExecutablesAfterShutdown(unittest.TestCase):

    def test_services(self, executable_under_test, proc_info):
        """Test that the executable under test finished cleanly."""
        launch_testing.asserts.assertExitCodes(
            proc_info,
            [launch_testing.asserts.EXIT_OK],
            executable_under_test
        )
