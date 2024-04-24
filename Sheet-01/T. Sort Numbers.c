#include<stdio.h>
int main()
{
    long long int A,B,C;
    scanf("%lld%lld%lld",&A,&B,&C);
    if(A>B && A>C && B>C)
    {
        printf("%lld\n%lld\n%lld\n",C,B,A);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A>B && A>C && B<C)
    {
        printf("%lld\n%lld\n%lld\n",B,C,A);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A>B && A<C && A>B)
    {
        printf("%lld\n%lld\n%lld\n",B,A,C);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A>B && A<C && A<B)
    {
        printf("%lld\n%lld\n%lld\n",A,B,C);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A<B && B>C && A>C)
    {
        printf("%lld\n%lld\n%lld\n",C,A,B);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A<B && B>C && A<C)
    {
        printf("%lld\n%lld\n%lld\n",A,C,B);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A<B && B<C && A>B)
    {
        printf("%lld\n%lld\n%lld\n",B,A,C);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A<B && B<C && A<B)
    {
        printf("%lld\n%lld\n%lld\n",A,B,C);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A>B && B==C)
    {
        printf("%lld\n%lld\n%lld\n",C,B,A);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A<B && B==C)
    {
        printf("%lld\n%lld\n%lld\n",A,C,B);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(B>A && A==C)
    {
        printf("%lld\n%lld\n%lld\n",C,A,B);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(B<A && A==C)
    {
        printf("%lld\n%lld\n%lld\n",B,C,A);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(C>A && A==B)
    {
        printf("%lld\n%lld\n%lld\n",B,A,C);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(C<A && A==B)
    {
        printf("%lld\n%lld\n%lld\n",C,B,A);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
    else if(A==B && B==C)
    {
        printf("%lld\n%lld\n%lld\n",A,B,C);
        printf("\n%lld\n%lld\n%lld\n",A,B,C);
    }
}
