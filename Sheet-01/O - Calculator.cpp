#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cin>>a>>ch>>b;
    if(ch=='+')
    {
        cout<<a+b;
    }
    else if(ch=='-')
    {
        cout<<a-b;
    }
    else if(ch=='*')
    {
        cout<<a*b;
    }
    else
    {
        cout<<a/b;
    }
    return 0;
}
