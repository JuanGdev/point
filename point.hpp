#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

struct point {
  double x;
  double y;
  double z;
};

point set( double x, double y, double z );
void point_print ( point pt );

#endif
