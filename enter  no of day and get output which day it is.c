#include <stdio.h>
#include<conio.h>
void main()
{   
    int no;
    printf("enter no of day : ");
    scanf(" %d",&no);
    if (no==1) 
    {
        printf("sunday");
    } 
    else if (no==2)
    {
        printf("monday");
    } 
    else if (no==3)
    {
        printf("tuesday");
    }
    else if (no==4)
    {
        printf("wednesday");
    }
    else if (no==5)
    {
        printf("thrusday");
    }
    else if (no==6)
    {
        printf("friday");
    }
    else if (no==7)
    {
        printf("saturday");
    }
    else
    {
        printf("invalid number input");
    }
    getch();
}