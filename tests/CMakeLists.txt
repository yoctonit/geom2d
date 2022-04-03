add_library(test-main main.cpp)

add_executable(all_tests
    util_equal.cpp
    core_point_distance.cpp
    circles_intersection.cpp
)
target_link_libraries(all_tests PRIVATE test-main geom2d)
add_test(
    NAME tests
    COMMAND all_tests
)

# add_executable(util_equal util_equal.cpp)
# target_link_libraries(util_equal PRIVATE geom2d)
