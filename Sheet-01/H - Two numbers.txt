#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,fl,ce,ro;
    cin>>a>>b;
    fl=floor(a/b);
    ce=ceil(a/b);
    ro=round(a/b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<fl<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ce<<endl;
    cout<<"round "<<a<<" / "<<b <<" = "<<ro;
    return 0;
}

