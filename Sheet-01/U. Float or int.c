#include<stdio.h>
#include<math.h>
int main()
{
    float N,i1;
    int i;
    scanf("%f",&N);
    i=floor(N);
    i1=N-i;
    if(i1==0.0)
        printf("int %d",i);
    else
        printf("float %d %.3f",i,i1);
}
