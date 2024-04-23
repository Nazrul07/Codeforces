#include<stdio.h>
#include<math.h>
int main()
{
    long long int N,M;
    int i,i1,i2;
    scanf("%lld%lld",&N,&M);
    i=N%10;
    i1=M%10;
    i2=i+i1;
    printf("%d",i2);
}
