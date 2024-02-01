#include<iostream>
using namespace std;
void print(int n)
{
    if(n==0)cout<<n;
    else cout<<n+1;
}
int main()
{
    int t,count=0,i,j;
    cin>>t;
    int a[t];
    for(i=0 ; i<t ; i++)
    {
        cin>>a[i];
    }
    for(i=0 ; i<t ; i++)
    {
        for(j=0 ; j<t ; j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0 ; i<t-1 ; i++)
    {
        if(a[i]!=a[i+1])
            count++;
    }
    print(count);
    return 0;
}
