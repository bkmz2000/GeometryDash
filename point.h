#ifndef _Point
#define _Point

#include <iostream>
#include <math.h>

using std::ostream;

class Vector;

class Point
{
protected:
  int x;
  int y;

public:
  int getX(){return x;}
  int getY(){return y;}

  void setX(int x_){x=x_;}
  void setY(int y_){y=y_;}

  int dist(Point other);

  Point();
  Point(int, int);
};


#endif