#
# sensors
#

add_library(ekf_sensors INTERFACE)
add_library(ekf::sensors ALIAS ekf_sensors)

target_include_directories(ekf_sensors INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    ) 

#
# ekf
#

find_package(Eigen3 REQUIRED PATHS ${CMAKE_PREFIX_PATH})
include_directories(${EIGEN3_INCLUDE_DIR})
find_package(manif REQUIRED PATHS ${CMAKE_PREFIX_PATH})

add_library(ekf_ekf src/ekf.cc)
add_library(ekf::ekf ALIAS ekf_ekf)

target_include_directories(ekf_ekf PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_PREFIX_PATH}/include/eigen3>
    $<BUILD_INTERFACE:${CMAKE_PREFIX_PATH}/include>
    )


add_subdirectory(test)
