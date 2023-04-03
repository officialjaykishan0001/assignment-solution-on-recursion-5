#include<iostream>
using namespace std;
//dry run
//n=19;
//f{num=19;i=2;}
//f{num=19;i=3;}
//f{num=19;i=4;}
//f{num=19;i=5}
//f{num=19;i=6}
//f{num=19;i=7}
//.
//.
//.
//f{num=19;i=18;}
//f{num=19;i=19;true;}that's the required answer.

//similiary for n = 4;
//n=4;
//f{num=4;i=2;false};that's the required answer
bool f(int num,int i)
{
    if(i>=num)
    {
        return true;
    }

    if(num%i==0)
    {
        return false;
    }

    f(num,i+1);
}
int main()
{
    int n ;
    cin>>n;

    if(f(n,2))
    {
        cout<<endl<<"Yes";
    }
    else{
        cout<<endl<<"No";
    }
    cout<<endl;

    return 0;

    
}