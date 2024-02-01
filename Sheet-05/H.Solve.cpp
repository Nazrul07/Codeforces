#include<iostream>
using namespace std;

void print(int n,char c)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<c<<" ";
    }
}
int main()
{
    int t,n,i;
    char c;
    cin>>t;
    for(i=0 ; i<t ; i++)
    {
        cin>>n>>c;
        print(n,c);
        cout<<endl;
    }
    return 0;
}
