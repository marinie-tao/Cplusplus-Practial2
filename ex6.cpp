//Fibonacci with recursion

#include <iostream>

using namespace std;

int fib(int x) 
{
   if((x==1)||(x==0)) //Base case ->if index equal 0 or 1 
   {
      return(x);
   }
   else 
   {
      return(fib(x-1)+fib(x-2)); 
   }
}

int main() 
{
   int x;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   
   for( int i = 0;i < x; i++) 
   {
      cout << " " << fib(i);
   }
   return 0;
}