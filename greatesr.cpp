


#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
   cin>>a>>b>>c>>d ;
   cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl ;
   if (b>a) {
   cout<<b;
   }
   else {
   if (c>a) {
   cout<<c;
   }
   else {
   if (d>c) {
   cout<<d ;
   }
   else {
   cout<<a ;
   }
   }
   }
    return 0;
}
