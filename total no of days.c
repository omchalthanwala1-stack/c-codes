//calcluate total no of days
#include<stdio.h>
#include<conio.h>
void main()
{
    int no,months,days;
    printf("enter no of days ");
    scanf("%d",&no);
    months=no/30;
    days=no%30;
    printf("its %d months and %d days",months,days,no);
    getch();
}
