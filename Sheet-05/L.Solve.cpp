#include<iostream>
using namespace std;
void print(int a)
{
    cout<<a<<" ";
}
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(i=0 ; i<n ; i++)
    {
        cin>>b[i];
    }
    for(i=0 ; i<n ; i++)
        print(b[i]);
    for(i=0 ; i<n ; i++)
        print(a[i]);
    return 0;
}
