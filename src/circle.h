#include "core.h"
#include <vector>

#ifndef MN_GEOM2D_CIRCLE
#define MN_GEOM2D_CIRCLE

namespace mn
{
   namespace geom2d
   {
      class circle_circle_intersection
      {
      public:
         enum class type {
            NOT_INTERSECTING_OUTSIDE,
            TOUCHING_OUTSIDE,
            INTERSECTING,
            TOUCHING_INSIDE,
            NOT_INTERSECTING_INSIDE,
            OVERLAPPING
         };

         circle_circle_intersection(type t_) { t = t_; }
      
         type intersectioin_type() { return t; }
         void intersectioin_type(type t_) { t = t_; }

         point first_point() { return p1; }
         point second_point() { return p2; }

      private:
         point p1, p2;
         type t;
      };

      class circle
      {
      public:
        point center;
        double radius;

        circle(point p_, double r_) : center{p_}, radius{r_} {}

        circle_circle_intersection intersect(const circle& c);
      };

   }
}

#endif // MN_GEOM2D_CIRCLE
