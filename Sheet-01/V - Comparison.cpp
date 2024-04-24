#include<iostream>
using namespace std;
int main()
{
    char c;
    int a,b;
    cin>>a>>c>>b;
    if(c=='>')
    {
        if(a>b)
            cout<<"Right";
        else
            cout<<"Wrong";
    }
    else if(c=='<')
    {
        if(a<b)
            cout<<"Right";
        else
            cout<<"Wrong";
    }
    else
    {
        if(a==b)
            cout<<"Right";
        else
            cout<<"Wrong";
    }
    return 0;
}
