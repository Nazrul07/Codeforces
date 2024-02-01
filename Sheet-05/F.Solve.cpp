#include<bits/stdc++.h>
using namespace std;

void fun(long long int a,long long int b)
{
    long long int sum=0,j;
    for(j=2 ; j<=b ; j+=2)
    {
        sum+=pow(a,j);
    }
    cout<<sum<<endl;
}

int main()
{
    long long int x,n;
    cin>>x>>n;
    fun(x,n);
}
