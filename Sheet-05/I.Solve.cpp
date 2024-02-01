#include<iostream>
using namespace std;
int main()
{
    int n,x,y,i,j;
    cin>>n>>x>>y;
    int a[n][n];
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0 ; i<n ; i++)
    {
        int temp=a[x-1][i];
        a[x-1][i]=a[y-1][i];
        a[y-1][i]=temp;
    }
    for(i=0 ; i<n ; i++)
    {
        int temp1=a[i][x-1];
        a[i][x-1]=a[i][y-1];
        a[i][y-1]=temp1;
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
}
