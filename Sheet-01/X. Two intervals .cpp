#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,a1,b1,Max,Min;
    cin>>a>>b>>a1>>b1;
    if(b<a1 || (a>a1 && a1==b1) || (a>a1 && a>b1))
        cout<<"-1"<<endl;
    else
    {
        Max=max(a,a1);
        Min=min(b,b1);
        cout<<Max<<" "<<Min<<endl;
    }

    return 0;
}
