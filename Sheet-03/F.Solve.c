#include<stdio.h>
int main()
{
    long long n,i;
    long long a[100000];
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=n-1 ; i>=0 ; i--)
    {
        printf("%lld ",a[i]);
    }
}
