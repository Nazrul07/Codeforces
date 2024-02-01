#include<stdio.h>
#include<math.h>
int main()
{
    long long sum=0,N,i;
    long long a[100000];
    scanf("%d",&N);
    for(i=0 ; i<N ; i++)
    {
        scanf("%lld",&a[i]);
        sum = sum+a[i];
    }
    printf("%lld",abs(sum));
}
