#include<iostream>
using namespace std;

void binaryEquavalent(int n)
{
    if(n==0)
    {
        return ;
    }

    cout<<(n%2)<<" ";

    binaryEquavalent(n/2);

}

int main()
{
    int n ;
    cout<<"enter the number : ";
    cin>>n;

    binaryEquavalent(n);

    cout<<endl;

    return 0;
}