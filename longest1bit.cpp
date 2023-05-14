    #include <iostream>
using namespace std;
int longestConsecutiveOnes(int n)
{
    int result = 0;
    while (n!=0)
    {
    
        int x = n<<1;
        
        
        n = n & x;
 
        result++;
    }
 
    return result;
}
int main()
{
    int n;
    cin>>n;

    cout<<longestConsecutiveOnes(n);
    
    return 0;
}