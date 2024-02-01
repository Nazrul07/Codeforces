#include<stdio.h>
int main()
{
    long long int a,b,c;
    long long k;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    if(a+b*c == k)
        printf("YES");
    else if(a-b*c == k)
        printf("YES");
    else if(a*b-c == k)
        printf("YES");
    else if(a-b+c == k)
        printf("YES");
    else if(a*b+c == k)
        printf("YES");
    else if(a+b-c == k)
        printf("YES");
    else
        printf("NO");
}
