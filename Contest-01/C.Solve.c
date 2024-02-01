#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'y')
        printf("%c",ch+1);

    else if(ch == 'z')
        //printf("a");
        printf("%c",ch-25);

}
