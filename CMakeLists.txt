cmake_minimum_required(VERSION 3.0)

project(NH558J2)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug)
endif()

# Add subdirectories
add_subdirectory(external/googletest)
add_subdirectory(src)
add_subdirectory(test)

# Include header files
include_directories(include)

