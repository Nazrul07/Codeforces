#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,rem;
    cin>>x;
    while(x!=0)
    {
        rem=x%10;
        x=x/10;
    }
    if(rem%2==0)
        cout<<"EVEN";
    else
        cout<<"ODD";
    return 0;
}
