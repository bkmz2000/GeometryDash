#include "square.h"

Square::Square(int x, int y, int width): center(x, y)
{
  if(width % 2 == 1)
  {
    cout<<"Error! Width must be even!"<<endl;
    exit(1); 
  }

  points = new Vector[4];

  int hWidth = (width-1)/2;

  points[0] = Vector( hWidth,  hWidth)+center;
  points[1] = Vector(-hWidth,  hWidth)+center;
  points[2] = Vector(-hWidth, -hWidth)+center;
  points[3] = Vector( hWidth, -hWidth)+center;
}

void Square::rotate(int teta)
{
  for(int i=0; i<4; i++)
    points[i].rotate(teta, center);
}