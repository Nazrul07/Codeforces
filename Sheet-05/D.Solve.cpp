#include<bits/stdc++.h>
using namespace std;

void check(int x)
{
    int k=0,j;
    for(j=2 ; j*j<=x ; j++)
    {
        if(x%j==0)
        {
            k=1;
            break;
        }
    }
    if(k==1 || x==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main()
{
    int a,n,i;
    cin>>n;
    for(i=1 ; i<=n ; i++)
    {
        cin>>a;
        check(a);
    }
}
