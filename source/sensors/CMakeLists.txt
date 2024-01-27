#
# sensors
#

add_library(ekf_sensors INTERFACE)
add_library(ekf::sensors ALIAS ekf_sensors)

target_include_directories(ekf_sensors INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    ) 

target_link_libraries(ekf_sensors INTERFACE ekf::units)
