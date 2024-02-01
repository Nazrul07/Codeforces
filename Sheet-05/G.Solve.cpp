#include<iostream>
using namespace std;

int Maxi(int x,int y)
{
    if(x>y) return x;
    else return y;
}

int Mini(int x,int y)
{
    if(x>y) return y;
    else return x;
}
int main()
{
    int n,Max=0,Min=100000,i,a;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>a;
        Max=Maxi(Max,a);
        Min=Mini(Min,a);
    }
    cout<<Min<<" "<<Max;
    return 0;
}
