//function to display Floyd triangle 

#include <iostream>
using namespace std;

int main()
{
   int rows, i, j, num = 1;

   //number of rows to print
   cout << "Enter number of rows for Floyd's triangle: ";
   cin >> rows;

   //for loop responsible for number of rows
   for(i = 1; i <= rows; i++)
   {
      //for loop responsible for number of columns
      for(j=1; j <= i; ++j)
      {
         cout << num++ << " "; //print number starting from 1
      }
      //prints new number in next line
      cout << endl;
   }

   return 0;
}