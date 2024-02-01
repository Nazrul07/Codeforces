#include<iostream>
using namespace std;
int main()
{
    int t,i,s,count=0,k=0;
    cin>>t;
    int a[t];
    for(i=0 ; i<t ; i++)
    {
        cin>>s;
        if(s==0)
        {
            count++;
        }
        else
        {
            a[k]=s;
            k++;
        }
    }
    for(i=0 ; i<k ; i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0 ; i<count ; i++)
    {
        cout<<"0 ";
    }
}
