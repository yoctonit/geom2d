#include "circle.h"
#include "util.h"
#include <cmath>

namespace mn
{
   namespace geom2d
   {
        circle_circle_intersection circle::intersect(const circle& c) {
            double d = center.distance(c.center); 
            double total_radius = radius + c.radius;

            if (d > total_radius)
                return circle_circle_intersection(circle_circle_intersection::type::NOT_INTERSECTING_OUTSIDE);

            if (equal(d, total_radius)) {
                return circle_circle_intersection(circle_circle_intersection::type::TOUCHING_OUTSIDE);
            }

            double radius_difference = std::abs(radius - c.radius);
            if (d > radius_difference && d < total_radius) {
                return circle_circle_intersection(circle_circle_intersection::type::INTERSECTING);
            }

            if (equal(radius, c.radius) && equal(d, 0.0))
                return circle_circle_intersection(circle_circle_intersection::type::OVERLAPPING);

            if (equal(d, radius_difference)) {
                return circle_circle_intersection(circle_circle_intersection::type::TOUCHING_INSIDE);
            }

            // if (d < radius_difference)
                return circle_circle_intersection(circle_circle_intersection::type::NOT_INTERSECTING_INSIDE);
        }
   }
}
