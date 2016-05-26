#ifndef _Vector
#define _Vector

#include <math.h>
#include "point.h"

class Vector : public Point
{
public:
  Vector operator+(Point other);
  Vector operator+(Vector other);

  Vector operator-(Point other);
  Vector operator-(Vector other);
  
  void operator=(Point other);
  void operator=(Vector other);
  
  Vector();
  Vector(int x, int y): Point(x, y)
  {}
  int length();
  void rotate(int teta, Point center = Point(0, 0));
};

#endif