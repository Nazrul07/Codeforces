#include<stdio.h>
int main()
{
    int n,i,a[1000],max,maxp,min,minp;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            max=a[0];
            maxp=0;
            min=a[0];
            minp=0;
            continue;
        }
        if(max<a[i])
        {
            max=a[i];
            maxp=i;
        }
        if(min>a[i])
        {
            min=a[i];
            minp=i;
        }
    }
    a[maxp]=min;
    a[minp]=max;
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
}
