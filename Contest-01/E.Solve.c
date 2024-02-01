#include<stdio.h>
int main()
{
    int a,b,i,j=0,k=0,n=0;
    scanf("%d%d",&a,&b);
    for(i=1 ; i<=5050 ; i++)
    {
        if(a>b || a==b)
        {
            if(i%2 == 0)
                k++;
            else if(i%2 !=0 )
                j++;
            if(j == a && k == b)
            {
                n=1;
                break;
            }
        }
        else if(a<b)
        {
            if(i == 1)
                continue;
            if(i%2 == 0)
                k++;
            else if(i%2 !=0 )
                j++;
            if(j == a && k == b)
            {
                n=1;
                break;
            }
        }
    }
    if(n == 1)
        printf("YES");
    else
        printf("NO");

}
