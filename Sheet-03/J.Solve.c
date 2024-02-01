#include<stdio.h>
int main()
{
    int test,n,i,temp,count=0,a[10000];
    scanf("%d",&test);
    for(i=0 ; i<test ; i++)
    {
        scanf("%d",&a[i]);

        if(i==0)
            temp=a[i];
        else
        {
            if(temp>a[i])
            {
                temp=a[i];
            }
        }
    }
    for(i=0 ; i<test ; i++)
    {
        if(a[i] == temp)
            count++;
    }
    if(count%2 != 0)
        printf("Lucky");
    else
        printf("Unlucky");
}
