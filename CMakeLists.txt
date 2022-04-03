cmake_minimum_required(VERSION 3.15)
project(geom2d VERSION 0.1 LANGUAGES C CXX)

# Project wide setup
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

# Main targets built by this project
add_subdirectory(src)

# Things typically only needed if we are the top level project
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    enable_testing()
	add_subdirectory(tests)
	# add_subdirectory(packaging)
endif()
