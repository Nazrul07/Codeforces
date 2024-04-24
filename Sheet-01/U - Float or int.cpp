#include<iostream>
using namespace std;
int main()
{
    double x;
    int a;
    cin>>x;
    a=x;
    if(a==x)
        cout<<"int "<<a;
    else
        cout<<"float "<<a<<" "<<x-a;
}
