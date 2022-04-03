#include "catch.hpp"

#include "util.h"

TEST_CASE( "Epsilon equal function", "[mn::geom2d::util::equal]" ) {
   REQUIRE( mn::geom2d::equal(1.0, 2.0) == false );
   REQUIRE( mn::geom2d::equal(1.0, 1.1) == false );
   REQUIRE( mn::geom2d::equal(0.009, 1.0) == false );
   REQUIRE( mn::geom2d::equal(0.9991, 1.001) == false );

   REQUIRE( mn::geom2d::equal(1.0, 1.0) == true );
   REQUIRE( mn::geom2d::equal(1.0, 1.1, 0.11) == true );
   REQUIRE( mn::geom2d::equal(0.9991, 1.001, 0.002) == true );
   REQUIRE( mn::geom2d::equal(1.0, 1.001) == true );
   REQUIRE( mn::geom2d::equal(1.0, 1.0009) == true );
   REQUIRE( mn::geom2d::equal(0.9991, 1.0) == true );
}
