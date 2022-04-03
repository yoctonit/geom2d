#include "catch.hpp"

#include "core.h"
#include "util.h"

TEST_CASE( "Point distance", "[mn::geom2d::point::distance]" ) {
   mn::geom2d::point p1(2.0, 2.0), p2(3.0, 3.0);
	double d = p1.distance(p2);

   REQUIRE( mn::geom2d::equal(d, 1.4142) == true );
   REQUIRE( mn::geom2d::equal(d, 1.41) == false );
}
