#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    long long arr[n],sum=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        arr[i]=sum;
    }
    for(int i=0 ; i<q ; i++)
    {
        long long int l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l==0)
            cout<<arr[r]<<endl;
        else
        {
            l--;
            cout<<arr[r]-arr[l]<<endl;
        }
    }
    return 0;
}
