add_executable(mylib_test
    mylib_test.cpp
)

# Include GTest headers
include_directories(${gtest_SOURCE_DIR}/include)

# Link GTest library and pthread
target_link_libraries(mylib_test gtest pthread)
target_link_libraries(mylib_test ${PROJECT_NAME})

# Register the test
add_test(NAME mylib_test COMMAND mylib_test)

