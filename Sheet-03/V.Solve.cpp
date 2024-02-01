#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,p=0;
    cin>>n>>m;
    int a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    while(1)
    {
        p++;
        if(p>m)break;
        int count=0;
        for(j=0 ; j<n ; j++)
        {
            if(p==a[j])
                count++;
        }
        cout<<count<<endl;
    }
}
