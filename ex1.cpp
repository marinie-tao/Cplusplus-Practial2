// C++ program to check whether a point is in an cartesian plane or not

#include <iostream>
#include <cmath>
using namespace std;

bool isInside (int cx, int cy,int rad, int x, int y) // declaration of Funtion 

{
if ((x-cx)*(x-cx) + (y-cy)*(y-cy) <= rad*rad)
return true;

else 
return false;
} // definition of function 

int main()
{ 
  int x,y; 
  cout << "x: "; 
  cin >> x;
  cout << "y:";
  cin >> y; 
  int cx = 0, cy = 1, rad = 6; // arbitrary values
  if (isInside(cx,cy,rad,x,y))
    cout<< "(x,y) is inside the circle" << endl; 
    else 
    cout << " (x,y) is outside the circle";
} // function call 

