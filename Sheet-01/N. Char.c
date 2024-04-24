#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a' ... 'z':
    printf("%c",ch-32);
    break;
    case 'A' ... 'Z':
    printf("%c",ch+32);
    break;
    default:
    break;
    }
}
