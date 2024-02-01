#include<stdio.h>
int main()
{
    long long int seat,column,row;
    scanf("%lld",&seat);

    row = seat/4;

    if(row % 2 ==0)
        column = seat % 4;

    else
        column = 3 - (seat % 4);
    printf("%lld %lld",row,column);
}
