#include<stdio.h>
#include<math.h>
int main()
{
    long int N,i,i1,i2,i3;
    scanf("%ld",&N);
    i=N/365;
    i1=N%365;
    i2=i1/30;
    i3=i1%30;
    printf("%ld years",i);
    printf("\n%ld months",i2);
    printf("\n%ld days",i3);
}
