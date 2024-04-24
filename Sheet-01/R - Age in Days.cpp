#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,years,months,days,rem;
    cin>>x;
    years=x/365;
    rem=x%365;
    months=rem/30;
    rem=rem%30;
    days=rem;
    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days<<" days";
    return 0;
}
