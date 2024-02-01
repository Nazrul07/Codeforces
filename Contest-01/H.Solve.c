#include<stdio.h>
#include<math.h>
int main()
{
    double n,k,a;
    double i;

    scanf("%lf%lf%lf",&n,&k,&a);

    long long m = ((n*k)/a);

    i = (n*k)/a;

    if( i-m > 0 )
        printf("double");

    else if(i >= -2147483648 && i <= 2147483648)
        printf("int");

    else if(i > 2147483648)
        printf("long long");
}
