#include<stdio.h>
int main()
{
    int t,n,i,j,k;
    scanf("%d",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%d",&n);

        int a[n];
        for(j=0 ; j<n ; j++)
        {
            scanf("%d",&a[j]);
        }
        int p=1;
        while(p<=n)
        {
            for(j=0 ; j<n-p+1 ; j++)
            {
                int Max=-100000;
                for(k=j ; k<p+j ; k++)
                {
                    if(p==1)
                        printf("%d ",a[k]);
                    else
                    {
                        if(Max<a[k])
                        {
                            Max=a[k];
                        }
                    }
                }
                if(p!=1)
                    printf("%d ",Max);
            }
            p++;
        }
        printf("\n");
    }
}
