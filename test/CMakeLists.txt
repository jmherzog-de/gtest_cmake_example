
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

add_executable(multiply_test multiply_test.cpp)

target_link_libraries(multiply_test multiply ${GTEST_BOTH_LIBRARIES} pthread)

add_test(multiply_gtest multiply_test)