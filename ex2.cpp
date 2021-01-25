//C ++ function that displays the position of a body moving at fixed interval of time  

#include <iostream>
#include <cmath>
using namespace std; 

double bodyPosition (double x0, double v, double t, double a)
{
  return x0 + (v*t) + (1.0/2.0) * (a * pow(t,2.0));
}
// declaration and definition of a function 

int main ()
{
  int n; 
  double t= 0.0; 
  double x0, v, a, delta_t; 
  cout << "Enter initial position: "; 
  cin >> x0;
  cout << "Enter the speed: "; 
  cin >> v; 
  cout << "Enter the acceleration: ";
  cin >> a;
  cout << "How many times you want to display the position of the body? ";
  cin >> n;
  cout << "How often (in seconds) you want to update the position of the moving object? "; 
  cin >> delta_t;


  for(int i = 0; i<n; i=i+1)
  {
    double current_position = bodyPosition (x0, v, t, a);
    cout << "At time " << t << " the position is " << current_position << endl; 
    t= t + delta_t; 

  }

}
// end of function main 

