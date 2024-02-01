#include<stdio.h>
int main()
{
    int n,min,i,p=0;
    int a[100000];
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            min = a[i];
        }
        else
        {
            if(min>a[i])
            {
                min=a[i];
                p=i;
            }
        }
    }
    printf("%d %d",min,p+1);
}
