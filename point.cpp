#include "point.hpp"

point set( double x, double y, double z )
{
  point pt;

  pt.x = x;
  pt.y = y;
  pt.z = z;

  return pt;
}

void point_print ( point pt )
{
  std::cout << "(" << pt.x << " ," << pt.y << " ," << pt.z << ")";
  std::cout << std::endl;
}
