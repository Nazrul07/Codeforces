#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll sum=0,cnt=0;
void rec(ll arr[],ll n,ll m)
{
    n--;
    if(cnt==m)
    {
        cout<<sum<<endl;
        return;
    }
    else
    {
        sum+=arr[n];
        cnt++;
    }
    rec(arr,n,m);
}
int main() {
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    rec(a,n,m);
    return 0;
}
