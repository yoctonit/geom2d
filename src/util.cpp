#include "util.h"
#include <cmath>

namespace mn
{
   namespace geom2d
   {
      bool equal(double a, double b, double epsilon) {
          return std::abs(a-b) < epsilon;
      }
   }
}
