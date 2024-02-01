#include<stdio.h>
int main()
{
    long long int size,m,a,b,i,result1,result2;
    scanf("%lld",&size);
    while(size--)
    {
        scanf("%lld%lld",&a,&b);

        if(a<b)
        {

        a--;

        result1 = a*(a+1) / 2;

        result2 = b*(b+1) / 2;

        printf("%lld\n",result2 - result1);
        }

        else
        {
        b--;

        result1 = a*(a+1) / 2;

        result2 = b*(b+1) / 2;

        printf("%lld\n",result1 - result2);
        }

    }
}
