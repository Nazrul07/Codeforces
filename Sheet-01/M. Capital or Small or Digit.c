#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a'...'z':
    printf("ALPHA\nIS SMALL");
    break;
    case 'A'...'Z':
    printf("ALPHA\nIS CAPITAL");
    break;
    default:
    printf("IS DIGIT");
    break;
    }
}
