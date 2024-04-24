#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,mul;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    mul=a*b*c*d;
    mul=mul%100;
    if(mul>=0 && mul<10)
        cout<<"0"<<mul;
    else
        cout<<mul;
    return 0;
}
