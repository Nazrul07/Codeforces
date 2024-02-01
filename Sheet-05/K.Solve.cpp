#include<iostream>
using namespace std;
int main()
{
    int n,x,i;
    cin>>n>>x;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    int m=x%n;
    for(i=n-m ; i<n ; i++)
        cout<<a[i]<<" ";
    for(i=0 ; i<n-m ; i++)
        cout<<a[i]<<" ";
    return 0;
}
