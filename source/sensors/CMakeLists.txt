#
# sensors
#

add_library(ekf_sensors INTERFACE)
target_sources(ekf_sensors INTERFACE include/sensors/sensors.hh)
add_library(ekf::sensors ALIAS ekf_sensors)

target_include_directories(ekf_sensors INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    ) 

target_link_libraries(ekf_sensors INTERFACE ekf::units)

install(
    TARGETS ekf_sensors
    EXPORT ${PROJECT_NAME}_Targets
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
