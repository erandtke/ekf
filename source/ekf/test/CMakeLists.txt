#
# ekf test
#

message("path ${CMAKE_PREFIX_PATH}")

enable_testing()

find_package(GTest REQUIRED PATHS ${CMAKE_PREFIX_PATH})

add_executable(ekf_test ekf_test.cc)
target_link_libraries(ekf_test PRIVATE ekf::ekf GTest::gtest GTest::gtest_main)

install(TARGETS ekf_test)
