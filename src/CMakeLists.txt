# set the name of the shared library to be built
set(SHARED_LIB_NAME ${PROJECT_NAME})

set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-g -O2")

# Define the library target
add_library(${SHARED_LIB_NAME} SHARED
  mylib.cpp
)

# Set the library version
set_target_properties(${SHARED_LIB_NAME} PROPERTIES
  VERSION 1.0.0
  SOVERSION 1
)

# set the entry point function for the shared library
target_link_options(${SHARED_LIB_NAME} PRIVATE
  "LINKER:--entry=help_info"
)

# Set the library's include directories
target_include_directories(${SHARED_LIB_NAME} PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

# Set any additional library dependencies
target_link_libraries(${SHARED_LIB_NAME} PRIVATE
# Add any additional libraries you need here
)

