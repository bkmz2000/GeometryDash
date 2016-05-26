#ifndef _Square
#define _Square 

#include <iostream>
#include "point.h"
#include "vector.h"

using std::cout;
using std::endl;

class Square
{
private:
  Vector *points;
  Point center;

public:
  Point *getPoints(){return points;}
  Point getCenter(){return center;}
  Square(int x, int y, int width);
  void rotate(int teta);
  void move(Vector);
};

#endif  