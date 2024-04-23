#include<stdio.h>
#include<math.h>
int main()
{
    long long int A,B,C;
    scanf("%lld%lld%lld",&A,&B,&C);
    if(A>B)
    {
        if(A>C)
        {
            if(B>C)
                printf("%lld %lld",C,A);
            else
                printf("%lld %lld",B,A);
        }
        else
        {
            if(B>A)
                printf("%lld %lld",A,C);
            else
                printf("%lld %lld",B,C);
        }
    }
    else
    {
        if(B>C)
        {
            if(C>A)
                printf("%lld %lld",A,B);
            else
                printf("%lld %lld",C,B);
        }
        else
        {
            if(B>A)
                printf("%lld %lld",A,C);
            else
                printf("%lld %lld",B,C);
        }

    }

}
