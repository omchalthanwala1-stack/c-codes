#include<stdio.h>
int main()
{
    char ch;
    int a,b,c;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    printf("enter character A,a,S,s,M,m,D,d :");
    scanf(" %c",&ch);
    switch(ch)
    {
        case 'A':
        case 'a':
            c=a+b;
            printf("addition of A&B= %d",c);
            break;
        case 'S':
        case 's':           
            c=a-b;
            printf("subtraction of A&B= %d",c);
            break;
        case 'M':
        case 'm':
            c=a*b;
            printf("multiplication of A&B= %d",c);
            break;
        case 'D':
        case 'd':
            c=a/b;
            printf("divition of A&B= %d",c);
            break;
        default :
            printf("wrong choice");
            break;
    }
    return 0;
}