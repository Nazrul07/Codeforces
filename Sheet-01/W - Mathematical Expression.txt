#include<iostream>
using namespace std;
int main()
{
    char c,c1;
    int a,b,re;
    cin>>a>>c>>b>>c1>>re;
    if(c=='+')
    {
        if(a+b == re)
            cout<<"Yes";
        else
            cout<<a+b;
    }
    else if(c=='-')
    {
        if(a-b==re)
            cout<<"Yes";
        else
            cout<<a-b;
    }
    else
    {
        if(a*b==re)
            cout<<"Yes";
        else
            cout<<a*b;
    }
    return 0;
}
