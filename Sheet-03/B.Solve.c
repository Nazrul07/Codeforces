#include<stdio.h>
int main()
{
    long long N,P,i,ii=0;
    int a[100000];
    scanf("%lld",&N);
    for(i=0 ; i<N ; i++)
    {
        scanf("%lld",&a[i]);

    }

    scanf("%lld",&P);

    for(i=0 ; i<N ; i++)
    {
        if(a[i] == P)
        {
            printf("%lld",i);
            ii = 1;
            break;
        }
    }
    if(ii==0)
        printf("-1");
}
