// power of integer numbers part 1 

#include <iostream>
using namespace std; 

int x = 0, y =0; // global variable! NB - be carefull previous error -> no dot put it inside the int main () block bc not global anymore! 

int power (int a, int n){
  if (n==0){
    return 1;
  }
  else{
    x += 1; 
    return a * power(a,n-1);
  } 
return 0;
}

int power2(int a, int n){
  if (n==0){
    return 1;
  }
  else if (n%2==0){
    y+=1; 
    return power2(a,n/2) * power2(a, n/2);
  }
  else if (n%2 != 0){
    y+=1;
    return a*power2(a,n/2) * power2(a, n/2);
  }
return 0; 
}

int main(){
  int a,n; 
  cout << "Enter an integer a: " ; 
  cin >> a; 
  cout << "Enter a non negative integer n: ";
  cin >> n;
  cout << "\n" << a << " to the power of "<< n << " is " << power(a,n) << endl;
  cout << "\n" <<  x << " recursive calls were needed for the first function " << endl;
  cout << "\n" << a << " to the power of " << n << " is " << power2(a,n) << endl;
  cout << "\n" << y << " recursive calls were needed for the second function " << endl;
return 0;
}

// The first function uses n recursive calls 
// The second function uses more recursive calls than the first function:
// 0 recursive calls if n =0 and 1 recursive call if n=1 
//We can no notice a pattern while testing several integers for a and n for the second function: 
// when n is > 1, the recursive calls adopt a pattern that one can generalize into this formula 2*n -1 (with n= the exponent)
//For example
// n = 1,2,3,4,5,6...
// r = 1,3,3,7,7,7.. 
// with n = exponent and r = recursive calls needed. 

