#include<iostream>
#include<iomanip>
using namespace std;
double Avg(double s,int n)
{
    return (s/n);
}
int main()
{
    int n,i;
    double sum=0,avg;
    cin>>n;
    double a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    avg=Avg(sum,n);
    cout<<fixed<<setprecision(7)<<avg;
    return 0;
}
