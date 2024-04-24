#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c,Min,Min1;
    cin>>a>>b>>c;
    x=a;
    y=b;
    z=c;
    if(a<=b && c<=b && a<=c)
        cout<<a<<endl<<c<<endl<<b<<endl;
    else if(a<=b && c<=b && a>=c)
        cout<<c<<endl<<a<<endl<<b<<endl;
    else if(b<=a && c<=a && b<=c)
        cout<<b<<endl<<c<<endl<<a<<endl;
    else if(b<=a && c<=a && b>=c)
        cout<<c<<endl<<b<<endl<<a<<endl;
    else if(a<=c && b<=c && a<=b)
        cout<<a<<endl<<b<<endl<<c<<endl;
    else if(a<=c && b<=c && a>=b)
        cout<<b<<endl<<a<<endl<<c<<endl;
    cout<<endl<<x<<endl<<y<<endl<<z;
    return 0;
}
