#include<stdio.h>
void print(int x)
{
    int i;
    for(i=1 ; i<=x ; i++)
    {
        if(i==1)
            printf("%d",i);
        else
            printf(" %d",i);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    print(t);
}
