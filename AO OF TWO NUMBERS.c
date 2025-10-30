//arrithmetic opperations of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f;
    clrsc();
    ptintf("enter th valu of A");
    scanf("%d",a);
    printf("enter the value of B");
    scanf("%d",b);
    c=a+b;
    printf("sum of A&B =%d",c);
    d=a-b;
    printf("difference of A&B =%d",d);
    e=a*b;
    printf("multiplication of A&B =%d",e);
    f=a/b;
    ptintf("division of A&B =%d",f);
    getch();
}
