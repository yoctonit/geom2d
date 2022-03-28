add_library(geom2d geom2d.cpp)
message(STATUS "${CMAKE_CURRENT_LIST_DIR}")
target_include_directories(geom2d PUBLIC ${CMAKE_CURRENT_LIST_DIR})
