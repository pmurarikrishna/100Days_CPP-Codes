#include <iostream>
using namespace std;

int main()
{
    int n,i ,j,temp ;
    cin>>n;
     int arra[n];
     int arra2[n];
     for (int i = 0; i < n; i++)
     {
         /* code */
         cin>>arra[i];

     }
     for (int j= n; j < n; j-- ,i=0,i<n,i++)
     
         /* code */

      {   
          temp=arra[i];
          arra[1]=arra2[j] ;

          arra2[j]=temp;
    //  cout<<arra2;
      }
     for (int i = 0; i <n; i++)
     {
         /* code */
         cout<<arra2[i];
     }
     
    //   cout<<arra2;
      return 0;
     
}
