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
double dot ( point pt1, point pt2 );
point cross( point pt1, point pt2);

#endif
