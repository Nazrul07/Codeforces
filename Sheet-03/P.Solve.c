#include<stdio.h>
int main()
{
    int t,i,j=0,count=1;
    scanf("%d",&t);
    int a[t];
    for(i=0 ; i<t ; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
            j=1;
    }
    if(j==1)
        printf("0");
    else
    {
        while(j==0)
        {
            for(i=0 ; i<t ; i++)
            {
                a[i]=a[i]/2;
                if(a[i]%2!=0)
                {
                    j=1;
                    break;
                }
            }
            if(j==0)
                count++;
        }printf("%d",count);
    }
}
