# generated from ros_environment/env-hooks/0.ros_distro.sh.in

if [ -n "$ROS_DISTRO" -a "$ROS_DISTRO" != "eloquent" ]; then
  echo "ROS_DISTRO was set to '$ROS_DISTRO' before. Please make sure that the environment does not mix paths from different distributions."
fi
