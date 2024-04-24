#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,i;
    char ch;
    scanf("%d%c%d",&A,&ch,&B);
    if(ch == '+')
    {
        i=A+B;
        printf("%d",i);
    }
    else if(ch == '-')
    {
        i=A-B;
        printf("%d",i);
    }
    else if(ch == '*')
    {
        i=A*B;
        printf("%d",i);
    }
    else if(ch == '/')
    {
        i=A/B;
        printf("%d",i);
    }
return 0;
}
