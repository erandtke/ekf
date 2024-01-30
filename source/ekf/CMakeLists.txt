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

target_link_libraries(ekf_ekf PUBLIC ekf::sensors)

@
@ update
@

add_library(ekf_update src/update.cc)
add_library(ekf::update ALIAS ekf_update)

target_include_directories(ekf_update PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_PREFIX_PATH}/include/eigen3>
    $<BUILD_INTERFACE:${CMAKE_PREFIX_PATH}/include>
    )


add_subdirectory(test)
