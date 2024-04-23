#include<stdio.h>
#define PI 3.141592653
int main()
{
    double R,Area;
    scanf("%lf",&R);
    Area = PI*R*R;
    printf("%.9lf",Area);
}
