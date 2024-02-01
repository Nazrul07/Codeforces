#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,Max,Max1,Min,Min1;
    cin>>a>>b>>c;
    Max1=max(a,b);
    Max=max(Max1,c);
    Min1=min(a,b);
    Min=min(Min1,c);
    cout<<Min<<" "<<Max;
    return 0;
}
