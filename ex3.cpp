//write a C++ function called "swap" that takes as arguments two integer numbers passed by-reference and that swap their values

#include <iostream>
using namespace std; 

// function definition to swap values
void swap(int &x, int &y) 
{
  int i; //variable to pass on the first value 
    i = x;
    x = y;  
    y = i; 
}

int main()
{
    // initialize variables
    int x = 2, y = 3;

    cout << "Before swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // call function to swap numbers
    swap(x, y);

    cout << "\nAfter swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}