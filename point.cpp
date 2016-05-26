#include "point.h"

Point::Point(int x_, int y_)
{
  x = x_;
  y = y_;
}

Point::Point()
{

}

int Point::dist(Point other)
{
  return sqrt(
      pow(x-other.getX(), 2) +
      pow(y-other.getY(), 2)
    );
}