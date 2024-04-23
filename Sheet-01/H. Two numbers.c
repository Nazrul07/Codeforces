#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,c,d,r;
    scanf("%f%f",&A,&B);
    c=floor(A/B);
    d=ceil(A/B);
    r=round(A/B);
    printf("floor %.0f / %.0f = %.0f",A,B,c);
    printf("\nceil %.0f / %.0f = %.0f",A,B,d);
    printf("\nround %.0f / %.0f = %.0f",A,B,r);
}
