#include<iostream>
using namespace std;
int productRecursive(int a,int b)
{
    if(b==0)
    {
        return 0;
    }

    return a+productRecursive(a,b-1);
}
int main()
{
    int a,b;
    cout<<"enter the both the numbers : ";
    cin>>a>>b;

    int result = productRecursive(a,b);

    cout<<endl<<(result)<<endl;

    return 0;
}