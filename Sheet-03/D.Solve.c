#include<stdio.h>
int main()
{
    int n,i;
    int A[100000];
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
        scanf("%d",&A[i]);
    for(i=0 ; i<n ; i++)
    {
        if(A[i] <= 10)
        printf("A[%d] = %d\n",i,A[i]);
    }
}
