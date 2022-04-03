#include "catch.hpp"

#include "circle.h"

TEST_CASE( "Circles intersection, first circle smaller", "[mn::geom2d::circles::intersection]" ) {

   mn::geom2d::circle c1(mn::geom2d::point(0.0, 0.0), 1.0);
   mn::geom2d::circle c2(mn::geom2d::point(5.0, 0.0), 2.0);

   SECTION( "no intersection, circles outside" ) {
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::NOT_INTERSECTING_OUTSIDE );
   }
   SECTION( "touching, circles outside" ) {
      c1.center.x = 2.0;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::TOUCHING_OUTSIDE );
   }
   SECTION( "intersection" ) {
      c1.center.x = 2.5;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "intersection" ) {
      c1.center.x = 3.5;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "touching, circle inside" ) {
      c1.center.x = 4.0;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::TOUCHING_INSIDE );
   }
   SECTION( "no intersection, one circle inside another" ) {
      c1.center.x = 4.1;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::NOT_INTERSECTING_INSIDE );
   }
   SECTION( "no intersection, one circle inside another" ) {
      c1.center.x = 5.5;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::NOT_INTERSECTING_INSIDE );
   }
   SECTION( "touching, circle inside" ) {
      c1.center.x = 6.0;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::TOUCHING_INSIDE );
   }
   SECTION( "intersection" ) {
      c1.center.x = 6.5;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "intersection" ) {
      c1.center.x = 7.0;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "intersection" ) {
      c1.center.x = 7.5;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "touching, circles outside" ) {
      c1.center.x = 8.0;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::TOUCHING_OUTSIDE );
   }
   SECTION( "no intersection, circles outside" ) {
      c1.center.x = 8.1;
      auto intersection = c1.intersect(c2);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::NOT_INTERSECTING_OUTSIDE );
   }

}

// same as above test case, just calling c2.intersect(c1) instead of c1.intersect(c2);
TEST_CASE( "Circles intersection, first circle bigger", "[mn::geom2d::circles::intersection]" ) {

   mn::geom2d::circle c1(mn::geom2d::point(0.0, 0.0), 1.0);
   mn::geom2d::circle c2(mn::geom2d::point(5.0, 0.0), 2.0);

   SECTION( "no intersection, circles outside" ) {
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::NOT_INTERSECTING_OUTSIDE );
   }
   SECTION( "touching, circles outside" ) {
      c1.center.x = 2.0;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::TOUCHING_OUTSIDE );
   }
   SECTION( "intersection" ) {
      c1.center.x = 2.5;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "intersection" ) {
      c1.center.x = 3.5;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "touching, circle inside" ) {
      c1.center.x = 4.0;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::TOUCHING_INSIDE );
   }
   SECTION( "no intersection, one circle inside another" ) {
      c1.center.x = 4.1;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::NOT_INTERSECTING_INSIDE );
   }
   SECTION( "no intersection, one circle inside another" ) {
      c1.center.x = 5.5;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::NOT_INTERSECTING_INSIDE );
   }
   SECTION( "touching, circle inside" ) {
      c1.center.x = 6.0;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::TOUCHING_INSIDE );
   }
   SECTION( "intersection" ) {
      c1.center.x = 6.5;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "intersection" ) {
      c1.center.x = 7.0;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "intersection" ) {
      c1.center.x = 7.5;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "touching, circles outside" ) {
      c1.center.x = 8.0;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::TOUCHING_OUTSIDE );
   }
   SECTION( "no intersection, circles outside" ) {
      c1.center.x = 8.1;
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::NOT_INTERSECTING_OUTSIDE );
   }

}

TEST_CASE( "Circles overlapping", "[mn::geom2d::circles::intersection]" ) {

   mn::geom2d::circle c1(mn::geom2d::point(1.0, 1.0), 2.0);
   mn::geom2d::circle c2(mn::geom2d::point(2.0, 4.0), 2.0);

   SECTION( "intersection" ) {
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::INTERSECTING );
   }
   SECTION( "no intersection, circles outside" ) {
      c2.center = mn::geom2d::point(12.0, 14.0);
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::NOT_INTERSECTING_OUTSIDE );
   }
   SECTION( "no intersection, circles outside" ) {
      c1.center = mn::geom2d::point(2.0, 4.0);
      auto intersection = c2.intersect(c1);
      REQUIRE( intersection.intersectioin_type() == mn::geom2d::circle_circle_intersection::type::OVERLAPPING );
   }

}