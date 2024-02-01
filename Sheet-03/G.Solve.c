#include<stdio.h>
int main()
{
    long long n,i,a[100000],k,count=0,ii=0;
    scanf("%lld",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%lld",&a[i]);
        count++;
    }

    k=count/2;

    for(i=0 ; i<k ; i++)
    {
        if(a[i] != a[n-i-1])
        {
            ii=1;
            break;
        }
    }
    if(ii == 0)
        printf("YES");
    else
        printf("NO");
}
