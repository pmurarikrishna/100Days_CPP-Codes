#include <iostream>
 using namespace std ;

 int main(){
int n,i ;
cin>>n;

int array[n];
// int k;
// cin>>k;
for(i=0;i<n;i++)
{
 cin>>array[i];
}
int k;
cin>>k;
for(i=0;i<n;i++)
{
 cout<<array[i]<<" ";
}
 cout<<endl<<" the key is  ";
for(i=0;i<n;i++)
{
 if (array[i]==k)
   cout<<i ;
  //  else
  //  cout<<"keyis not found";
}

return 0;


 }