#include<iostream>
#include<iomanip>
#define pi 3.141592653
using namespace std;
int main()
{
    double r,area;
    cin>>r;
    area=pi*r*r;
    cout<<fixed<<setprecision(9)<<area;
    return 0;
}

