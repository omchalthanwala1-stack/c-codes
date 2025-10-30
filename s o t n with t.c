//swapping of two numbers with third
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the  value ofA");
    sanf("%d",&a);
    printf("enter the value of B");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("value of A=%d",a);
    printf("value of B=%d",b);
    getch();
}