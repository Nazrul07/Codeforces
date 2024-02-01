#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    int i,j,p,prime=0,palin=0,C,Max=0,divi;
    for(i=0 ; i<t ; i++)
        cin>>a[i];
    sort(a,a+t);

    for(i=0 ; i<t ; i++)
    {
        p=0;
        if(a[i]==1)p=1;
        for(j=2 ; j*j<=a[i] ; j++)
        {
            if(a[i]%j==0)
            {
                p=1;
                break;
            }
        }
        if(p==0)prime++;
        else
        {
            C=0;
            for(j=1 ; j<=a[i] ; j++)
            {
                if(a[i]%j==0)
                {
                    C++;
                }
            }
            if(Max<=C)
            {
                Max=C;
                divi=a[i];
            }
        }
        if(a[i]>=1 && a[i]<=9)
            palin++;
        else if(a[i]>=10 && a[i]<=99)
        {
            int h=a[i]%10;
            int hh=a[i]/10;
            if(h==hh)
                palin++;
        }
    }
    cout<<"The maximum number : "<<a[t-1]<<endl;
    cout<<"The minimum number : "<<a[0]<<endl;
    cout<<"The number of prime numbers : "<<prime<<endl;
    cout<<"The number of palindrome numbers : "<<palin<<endl;
    cout<<"The number that has the maximum number of divisors : "<<divi;
}
