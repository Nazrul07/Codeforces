#include<stdio.h>
int main()
{
    int n,i,count,result=0;
    long long a;
    scanf("%d",&n);

    for(i=0 ; i<n ; i++)
    {
        int count = 0;
        scanf("%lld",&a);

        if(a%2 !=0)
            count = 0;
        else
        {
            while(a>0)
            {
                if(a%2 != 0)
                    break;
                else
                {
                    count++;
                    a = a/2;
                }
            }
            if(count > result)
                result = count;
        }

    }
    printf("%d",result);
}
