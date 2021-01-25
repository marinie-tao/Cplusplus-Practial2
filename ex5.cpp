//non recursive Fibonnaci series i.e. 0 1 1 2 3 5 8 13 

#include <iostream>

using namespace std;  

int main() {  
  int n1=0,n2=1,next,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
 for(i=2;i<number;++i) //loop starts from at index 2 because index 0 = 0 and index1= 1 are already printed    
 {    
  next = n1 + n2;    
  cout<<next<<" ";    
  n1=n2;    
  n2=next;    
 }    
   return 0;  
   }  