#include<stdio.h>
int main()
{
    long long  size,i,j,limit,diff,sum,total,num,ii=0;
    scanf("%lld",&size);

    for(i=1 ; i<=size ; i++)
    {
        scanf("%lld",&num);
        scanf("%lld",&sum);

        total = (num*(num+1))/2;


        if(total < sum)
            printf("-1");
        else
        {
            while(total != sum)
            {
                if(total-num >= sum)
                {
                    total = total - num;
                    num --;
                }
                else
                {
                    printf("%lld ",num);
                    num --;
                    ii=1;
                    if(total - num >= sum)
                    {
                        total = total - num;
                    }
                }
            }
            if(ii == 1)
                for(j = num-1 ; j > 0 ; j--)
                {
                    printf("%lld ",j);
                }
            else
                for(j = num ; j > 0 ; j--)
                {
                    printf("%lld ",j);
                }
        }
        printf("\n");
    }
}
