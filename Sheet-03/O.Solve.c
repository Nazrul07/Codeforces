#include<stdio.h>
int main()
{
    long long n,i,a[10000],sum;
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;

    for(i=1 ; i<=n ; i++)
    {
        sum=a[i]+a[i-1];
        a[i+1]=sum;
    }
    printf("%lld",a[i-2]);
}
