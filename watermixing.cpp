#include <iostream>
using namespace std;

int main() {
	// your code goes here;
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	   // for(int i=0;i<=t;i++)
	   // {
	      if(a<b&&(b-a)<=x)
	        {
	          cout<<"yes"<<endl;
	        }
	      else if(a<b&&(b-a)>x)
	          cout<<"no"<<endl;
	      
	      
	      
	    else if(a>b&&(a-b)<=y)
	        {
	          cout<<"yes";
	        }
	   else if(a>b&&(a-b)>y)
	          cout<<"no"<<endl;
	          
	   else if(a=b)
         cout<<"yes"<<endl;
	        
	        
	        
	        
	        
	   // }
	}
	return 0;
}