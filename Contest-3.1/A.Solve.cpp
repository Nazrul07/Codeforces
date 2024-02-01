#include<iostream>
using namespace std;
int main()
{
    int a,b,t,i;
    cin>>t;
    for(i=1 ; i<=t ; i++)
    {
    cin>>a>>b;
    if(a==b)
        cout<<"Square"<<endl;
    else
        cout<<"Rectangle"<<endl;
    }
    return 0;
}
