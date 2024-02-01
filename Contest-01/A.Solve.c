#include<stdio.h>
int main()
{
    int x,p;
    float ans;
    scanf("%d%d",&p,&x);
    ans=(float)(100/(100-p))*x;
    printf("%.2f",ans);
}
