# Install script for directory: /opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/workspace/install/orocos_kdl")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.4.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "$ORIGIN/../lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/opt/workspace/build/orocos_kdl/src/liborocos-kdl.so.1.4.0"
    "/opt/workspace/build/orocos_kdl/src/liborocos-kdl.so.1.4"
    "/opt/workspace/build/orocos_kdl/src/liborocos-kdl.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.4.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.4"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "::::::::::::::"
           NEW_RPATH "$ORIGIN/../lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kdl" TYPE FILE FILES
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/articulatedbodyinertia.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chain.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chaindynparam.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainfksolver.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainfksolverpos_recursive.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainfksolvervel_recursive.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainidsolver.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainidsolver_recursive_newton_euler.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainidsolver_vereshchagin.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolver.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolverpos_lma.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolverpos_nr.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolverpos_nr_jl.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolvervel_pinv.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolvervel_pinv_givens.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolvervel_pinv_nso.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainiksolvervel_wdls.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainjnttojacdotsolver.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/chainjnttojacsolver.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frameacc.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frameacc_io.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frames.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frames_io.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/framevel.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/framevel_io.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jacobian.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jntarray.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jntarrayacc.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jntarrayvel.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/jntspaceinertiamatrix.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/joint.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/kdl.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/kinfam.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/kinfam_io.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/motion.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_circle.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_composite.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_cyclic_closed.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_line.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_point.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/path_roundedcomposite.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/rigidbodyinertia.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/rotational_interpolation.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/rotational_interpolation_sa.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/rotationalinertia.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/segment.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/solveri.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/stiffness.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/trajectory.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/trajectory_composite.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/trajectory_segment.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/trajectory_stationary.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/tree.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treefksolver.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treefksolverpos_recursive.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treeiksolver.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treeiksolverpos_nr_jl.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treeiksolverpos_online.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treeiksolvervel_wdls.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/treejnttojacsolver.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_dirac.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_rect.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_spline.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_trap.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/velocityprofile_traphalf.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frameacc.inl"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/frames.inl"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/framevel.inl"
    "/opt/workspace/build/orocos_kdl/src/config.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kdl/utilities" TYPE FILE FILES
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/error.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/error_stack.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/kdl-config.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rall1d.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rall1d_io.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rall2d.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rall2d_io.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/rallNd.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/traits.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/utility.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/utility_io.h"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/svd_HH.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/svd_eigen_HH.hpp"
    "/opt/workspace/src/ros2/orocos_kinematics_dynamics/orocos_kdl/src/utilities/svd_eigen_Macie.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/opt/workspace/build/orocos_kdl/src/orocos-kdl.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/opt/workspace/build/orocos_kdl/src/orocos_kdl.pc")
endif()

