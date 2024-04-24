#include<stdio.h>
#include<math.h>
int main()
{
    long int A,B,C,i;
    char S;
    scanf("%ld %c %ld = %ld",&A,&S,&B,&C);
    if(S == '+')
    {
        i=A+B;
        if(C == i)
            printf("Yes");
        else
            printf("%ld",i);
    }
    if(S == '-')
    {
        i=A-B;
        if(C == i)
            printf("Yes");
        else
            printf("%ld",i);
    }
    if(S == '*')
    {
        i=A*B;
        if(C == i)
            printf("Yes");
        else
            printf("%ld",i);
    }
}
