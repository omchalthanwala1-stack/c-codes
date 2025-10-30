#include<stdio.h>
int main()
{
    char ch;
    int a,b,c;
    printf("enter arithmatic operator symbols '+','-','*','/','%':");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
            printf("enter two number:");
            scanf("%d%d",&a,&b);
            c=a+b;
            printf("addition of A&B= %d",c);
            break;
        case '-':
            printf("enter two number:");
            scanf("%d%d",&a,&b);
            c=a-b;
            printf("subtraction of A&B= %d",c);
            break;
        case '*':
            printf("enter two number:");
            scanf("%d%d",&a,&b);
            c=a*b;
            printf("multiplication of A&B= %d",c);
            break;
        case '/':
            printf("enter two number:");
            scanf("%d%d",&a,&b);
            c=a/b;
            printf("divition of A&B= %d",c);
            break;
        case '%':
            printf("enter two number:");
            scanf("%d%d",&a,&b);
            c=a%b;
            printf("modlus of A&B= %d",c);
            break;
        default :
            printf("wrong choice");
            break;
    }
    return 0;
}