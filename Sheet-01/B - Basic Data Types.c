#include<stdio.h>
int main()
{
    int a;
    long long b;
    char c;
    float f;
    double d;
    scanf("%d %lld %c %f %lf",&a,&b,&c,&f,&d);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%c\n",c);
    printf("%.2f\n",f);
    printf("%.5lf",d);
}
