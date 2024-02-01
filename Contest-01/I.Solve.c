#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    int rem = a%10;

    int i = a/10;

    if(rem % i == 0 || i % rem ==0)
        printf("YES");

    else
        printf("NO");
}
