//simple interest of three numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int principal,rate,time,interest;
    printf("enter the value of Principal =");
    scanf("%d",&principal);
    printf("enter the value of Rate =");
    scanf("%d",&rate);
    printf("enter the value of Time =");
    scanf("%d",&time);
    interest=(principal*rate*time)/100;
    printf("the simple interest value = %d",interest);
    getch();
}