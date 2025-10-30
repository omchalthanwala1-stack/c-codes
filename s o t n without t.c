//swapping of two numbers without third variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter the  value ofA");
    sanf("%d",&a);
    printf("enter the value of B");
    scanf("%d",&b);
    a=b;
    b=a;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of A=%d",a);
    printf("value of B=%d",b);
    getch();
}