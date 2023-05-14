#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    if((X+Y+Z)==180)
	    {
	        cout<<"YES"<<endl ;
	    }
	    else
	    {
	         cout<<"NO"<<endl;
	    }
	   
	    
	}
	return 0;
}