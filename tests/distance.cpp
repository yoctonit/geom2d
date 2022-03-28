#include <iostream>
#include "geom2d.h"

int main()
{
   mn::geom2d::point p1, p2;
   p1.x = 2.0; p1.y = 2.0;
   p2.x = 3.0; p2.y = 3.0;
	double d = p1.distance(p2);
   
   std::cout << "Distance between p1 and p2 is:" << d << "\n";
	return 0;
}
