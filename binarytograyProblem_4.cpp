#include <bits/stdc++.h>
using namespace std;
int binary_to_gray(int n,int i) 
{
    int a,b;
    int result = 0;
    if (n!=0) 
    {
    // Taking last digit
        a = n % 10;
        n = n / 10;
    // Taking second last digit
        b = n % 10;
        if ((a & ~b) == 1 || (~a & b) == 1) {
            result = (int)(result + pow(10, i));
        }
        return binary_to_gray(n, ++i) + result;
    }
    return 0;
}
int main()
{
   int n;
   cout<<"Enter the binary number : ";
   cin>>n;
   cout<<binary_to_gray(n,0);
}