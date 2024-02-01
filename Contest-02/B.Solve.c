#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1 ; i<=a ; i++)
    {
        for(j=1 ; j<=a ; j++)
        {
            if(j == i && (a/2)+1 != i)
            {
                printf("\\");
            }
            else if(((a/2)+1 == i) && (j == (a/2)+1))
            {
                printf("X");
            }

            else if(j == a+1-i)
            {
                 printf("/");
            }

            else
                printf("*");
        }
        printf("\n");
    }
}
