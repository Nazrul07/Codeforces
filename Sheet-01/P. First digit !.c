#include<stdio.h>
#include<math.h>
int main()
{
    int X,i;
    scanf("%d",&X);
    i=X/1000;
    if(i%2 == 0)
        printf("EVEN");
    else
        printf("ODD");
return 0;
}
