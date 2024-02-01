#include<stdio.h>
int main()
{
    int size,i;
    long long sum=0;
    scanf("%d",&size);

    char ch[size];

    scanf("%s",ch);

    for(i=0 ; i<size ; i++)
    {
        sum=sum+ch[i]-'0';
    }
    printf("%lld",sum);
}
