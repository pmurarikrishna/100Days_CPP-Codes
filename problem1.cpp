#include <iostream>
 using namespace std ;
 int main(){
int n,s,e,w,k,m;
cout<<"no of trees in north having green only";

cin>>n;

cout<<"no of trees in south having red only";

cin>>s;

cin>>e>>w;
 cout <<"m";
 cin>>m;
 cin>>k;
if (m<=s*k)
cout<< m ;
else if (m<=s*k+e+w)
cout<< s*k+(m-s*k);
else 
cout<<-1;




 }

