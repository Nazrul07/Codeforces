#include<stdio.h>
#include<math.h>
int main()
{
    int A,B;
    char S;
    scanf("%d %c %d",&A,&S,&B);
    if(A<B)
    {
        if(S == '<')
            printf("Right");
        else
            printf("Wrong");
    }
    else if(A>B)
    {
        if(S == '>')
            printf("Right");
         else
            printf("Wrong");
    }
    else
    {
        if(S == '=')
           printf("Right");
        else
            printf("Wrong");
    }
}
