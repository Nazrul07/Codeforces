#include<stdio.h>
int main()
{
    int n,m,i,j,min=0,a;
    scanf("%d%d",&n,&m);

    for(i=0 ; i<n ; )
    {
        for(j=0 ; j<m ; j++,i++)
        {
            scanf("%d",&a);
            if(j == 0 )
                min = a;
            if(a<=min)
            {
                min=a;
            }
        }
        printf("%d ",min);

        if(n-i < m)
        {
            m = n-i;
        }
    }
}
