#include<stdio.h>
#include<math.h>
int main()
{
    long long int A,B,C,D,i,i1,i2,i3;
    scanf("%lld%lld%lld%lld",&A,&B,&C,&D);
    A%=100;
    B%=100;
    C%=100;
    D%=100;
    i=(long long)A*B*C*D;
    i1=i/10;
    i2=i%10;
    i3=i1%10;
    printf("%lld%lld",i3,i2);
}
