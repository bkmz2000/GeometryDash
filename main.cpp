#include <iostream>
#include "point.h"
#include "vector.h"
#include "square.h"

using std::cout;
using std::endl;

int main()
{
  Point a(0, 3), b(4, 0);
  cout<<"Distance: "<<a.dist(b)<<endl;

  Vector c(0, 3), d(4, 0);
  cout<<"Distance: "<<c.dist(d)<<endl;
  c.rotate(90); 
  cout<<"Distance: "<<c.dist(d)<<endl;

  Square e(0, 0, 5);

  Point *ps = e.getPoints();

  for(int i=0; i<4; i++)
    cout<<"x = "<<ps[i].getX()<<" y = "<<ps[i].getY()<<endl;

  cout<<endl;

  e.rotate(90);

  for(int i=0; i<4; i++)
    cout<<"x = "<<ps[i].getX()<<" y = "<<ps[i].getY()<<endl;
  
  return 0;
}
