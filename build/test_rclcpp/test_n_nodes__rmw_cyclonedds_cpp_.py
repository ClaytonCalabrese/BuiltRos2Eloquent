# generated from test_rclcpp/test/test_n_nodes.py.in

import os

from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch.actions import OpaqueFunction

import launch_testing
import launch_testing.asserts
import launch_testing_ros

import unittest


def generate_test_description(ready_fn):
    launch_description = LaunchDescription()

    env = None
    if 'rmw_cyclonedds_cpp':
        env = dict(os.environ)
        env['RMW_IMPLEMENTATION'] = 'rmw_cyclonedds_cpp'

    for i in range(10):
        launch_description.add_action(
            ExecuteProcess(
                cmd=['/opt/workspace/build/test_rclcpp/node_with_name'],
                name='node_with_name_' + str(i),
                env=env,
            )
        )

    checking_process = ExecuteProcess(
        cmd=['/opt/workspace/build/test_rclcpp/node_check_names'] + '10'.split(' '),
        name='node_check_names',
        env=env
    )
    launch_description.add_action(checking_process)
    launch_description.add_action(
        OpaqueFunction(function=lambda context: ready_fn())
    )
    return launch_description, locals()


class TestNNodes(unittest.TestCase):

    def test_10_nodes(self, proc_info, checking_process):
        proc_info.assertWaitForShutdown(checking_process, timeout=10)


@launch_testing.post_shutdown_test()
class TestNNodesAfterShutdown(unittest.TestCase):

    def test_10_nodes(self, proc_info):
        launch_testing.asserts.assertExitCodes(
            proc_info,
            [launch_testing.asserts.EXIT_OK],
            'node_check_names'
        )
        for i in range(10):
            launch_testing.asserts.assertExitCodes(
                proc_info,
                process='node_with_name_' + str(i),
            )
