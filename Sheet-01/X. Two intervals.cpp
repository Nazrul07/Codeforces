#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,a1,b1;
    cin>>a>>b>>a1>>b1;
    if(a>=a1 && b<=b1)
        cout<<a<<" "<<b;
    else if(a1<=b && b1>b)
        cout<<a1<<" "<<b;
    else if(a1>=a && b1<=b)
        cout<<a1<<" "<<b1;
    else if(a1>b || a>b1)
        cout<<"-1";
    else if(a>=a1 && b1<b)
        cout<<a<<" "<<b1;
    return 0;
}
