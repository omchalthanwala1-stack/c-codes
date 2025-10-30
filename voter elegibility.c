#include<stdio.h>
#include<conio.h>
void main()
{
     int age;
     printf("enter age :");
     scanf("%d",& age);
     if(age>=18)
     {
         printf("elegible voter");
     }
     else
     {
         printf("not elegible voter");
     }
     getch();
}