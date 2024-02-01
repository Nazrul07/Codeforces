#include<stdio.h>
int main()
{
    int n,i,p,k=0,j;
    scanf("%d",&n);
    int a[n],arr[n];
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
            p=i;
    }
    return 0;
}
