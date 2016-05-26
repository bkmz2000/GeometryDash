#include "vector.h"

Vector::Vector()
{}

int Vector::length()
{
  return this->dist(Point(0, 0));
}

void Vector::rotate(int teta, Point center)
{
  double angle = teta*M_PI/180;

  int px = x - center.getX();
  int py = y - center.getY();

  x = px*cos(angle) - py*sin(angle) + center.getX();
  y = px*sin(angle) + py*cos(angle) + center.getY();
}

Vector pointToVector(Point p)
{
  return Vector(p.getX(), p.getY());
}

Point vectorToPoint(Vector v)
{
  return Point(v.getX(), v.getY());
}

Vector Vector::operator+(Point other)
{
  return Vector(x+other.getX(), y+other.getY());
}

Vector Vector::operator+(Vector other)
{
  return Vector(x+other.getX(), y+other.getY());
}

Vector Vector::operator-(Point other)
{
  return Vector(x-other.getX(), y-other.getY());
}

Vector Vector::operator-(Vector other)
{
  return Vector(x-other.getX(), y-other.getY());
}

void Vector::operator=  (Vector other)
{
  x = other.getX();
  y = other.getY(); 
}

void Vector::operator=  (Point other)
{
  x = other.getX();
  y = other.getY(); 
}