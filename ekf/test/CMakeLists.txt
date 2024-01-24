#
# ekf test
#
include(GoogleTest)
add_executable(ekf_test ekf_test.cc)
target_link_libraries(ekf_test PRIVATE Gtest::gtest_main ekf::ekf) 

gtest_discover_tests(ekf_test)
