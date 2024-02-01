#include<stdio.h>
#include<string.h>
int main()
{
    int n,A,B,l,ii,i;
    char a[100];
    scanf("%d%d",&A,&B);
    scanf("%s",&a);
    l=strlen(a);

    for(i=0 ; i<l ; i++)
    {
        if(i==A)
            continue;
        if(a[i]>='0' && a[i]<='9')
            ii=1;
        else
        {
            ii=0;
            break;
        }
    }
    if(ii==1 && a[A] == '-')
        printf("Yes");
    else
        printf("No");
}
