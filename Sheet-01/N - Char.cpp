#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch,ch1;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        ch1=ch+32;
        cout<<ch1;
    }
    else
    {
        ch1=ch-32;
        cout<<ch1;
    }
    return 0;
}
