#
# units
# protect myself using templates
#

add_library(ekf_units INTERFACE)
add_library(ekf::units ALIAS ekf_units)

target_include_directories(ekf_sensors INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    ) 
