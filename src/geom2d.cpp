#include <cmath>
#include "geom2d.h"

namespace mn
{
   namespace geom2d
   {
      double point::distance(const point & p) {
         return std::sqrt((p.x - x) * (p.x - x) + (p.y - y) * (p.y - y));  
      }
   }
}
