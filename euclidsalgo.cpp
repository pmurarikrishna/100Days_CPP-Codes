#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Driver Code
int main()
{
    int a = 33, b = 12;
    cout << "GCD(" << a << ", "
         << b << ") = " << gcd(a, b)
                        << endl;
    a = 35, b = 10;
    cout << "GCD(" << a << ", "
         << b << ") = " << gcd(a, b)
                        << endl;
    a = 31, b = 2;
    cout << "GCD(" << a << ", "
         << b << ") = " << gcd(a, b)
                        << endl;   
    return 0;
}
 

