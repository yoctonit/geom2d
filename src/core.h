#ifndef MN_GEOM2D_CORE
#define MN_GEOM2D_CORE

namespace mn
{
   namespace geom2d
   {
      class vector
      {
      public:
         double x, y;

         vector() : x{}, y{} {}
         vector(double x_, double y_) : x{x_}, y{y_} {}
      };


      class point
      {
      public:
         double x, y;

         point() : x{}, y{} {}
         point(double x_, double y_) : x{x_}, y{y_} {}
         
         double distance(const point & p);
      };
   }
}

#endif // MN_GEOM2D_CORE
