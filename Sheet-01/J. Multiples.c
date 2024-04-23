#include<stdio.h>
#include<math.h>
int main()
{
    long int A,B,i;
    float j;
    scanf("%ld%ld",&A,&B);
    if(A>B)
    {
        i=A/B;
        j=(float)A/B;
        if(j == i)
            printf("Multiples");
        else
            printf("No Multiples");
    }
    else
    {
        i=B/A;
        j=(float)B/A;
        if(j == i)
            printf("Multiples");
        else
            printf("No Multiples");
    }

}
