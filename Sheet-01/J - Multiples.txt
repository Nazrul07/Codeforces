#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,Min,Max;
    cin>>a>>b;
    Min=min(a,b);
    Max=max(a,b);
    if(Max%Min==0)
        cout<<"Multiples";
    else
        cout<<"No Multiples";
    return 0;
}
