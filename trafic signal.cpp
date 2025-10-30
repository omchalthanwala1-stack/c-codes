#include <stdio.h>
#include<conio.h>
void main()
{
    char signal;
    printf("Traffic light colour: ");
    scanf(" %c",&signal);
    if (signal=='R') 
    {
        printf("Stop!");
    } 
    else if (signal=='Y')
    {
        printf("Get ready to move.");
    } 
    else if (signal=='G')
    {
        printf("Go!");
    }
    else
    {
        printf("Invalid signal input");
    }
    getch();
}