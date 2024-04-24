#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,ab,cd;
    cin>>a>>b>>c>>d;
    ab=b*log(a);
    cd=d*log(c);
    if(ab>cd)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
