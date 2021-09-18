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

double dot ( point pt1, point pt2 ){
  double result;

  result = pt1.x * pt2.x;
  result += pt1.y * pt2.y;
  result += pt1.z * pt2.z;
  return result;
}

//
//  | i j k    |
//  | x1 y1 z1 | = i*(y1*z2 - y2*z1) + j(x2*z1 - x1*z2) + k*(x1*y2 - x2*y1)
//  |x2 y2 z2  |
point cross( point pt1, point pt2){
  point result;

  result.x = pt1.y* pt2.z - pt2.y* pt1.z;
  result.y = pt2.x* pt1.z - pt1.x* pt2.z;
  result.z = pt1.x* pt2.y - pt2.x* pt1.y;

  return result;
}
