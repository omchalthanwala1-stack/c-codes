#include<stdio.h>
int main()
{
    char n;
    printf("enter a character : ");
    scanf("%c",&n);
    switch(n)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel");
            break;
        default:
            printf("consonent");
            break;
    }
    return 0;
}