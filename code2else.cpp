#include <iostream>
using namespace std ;
int main() {
    int num1,num2 ;
    int sum=0 ;
    cout<< " enter the first no"<<endl ;
    cin>> num1;
    cout<< " enter second no " <<endl;
    cin>>num2;
    sum=num1+num2;
   // cout<< " the sum is"<<sum ;
if (sum<100)
{
    cout<<sum ;
}

  else{
      cout<<"no result" ;
  }  
    return 0;
}