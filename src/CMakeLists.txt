add_library(geom2d
    util.cpp
    core.cpp
    circle.cpp
)
target_include_directories(geom2d PUBLIC ${CMAKE_CURRENT_LIST_DIR})
