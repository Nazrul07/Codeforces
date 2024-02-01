#include<stdio.h>
int main()
{
    int test,N,i,j,k,min,temp,a[10000];
    scanf("%d",&test);
    for(i=0 ; i<test ; i++)
    {
        scanf("%d",&N);
        for(j=0 ; j<N ; j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=1 ; j<N ; j++)
        {
            for(k=j+1 ; k<=N ; k++)
            {
                temp=a[j-1]+a[k-1]+k-j;
                if(k==2)
                    min=temp;
                else
                {
                    if(min>temp)
                        min=temp;
                }
            }
        }
        printf("%d\n",min);
    }
}
