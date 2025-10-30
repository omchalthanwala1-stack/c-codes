#include<stdio.h>
#include<conio.h>
void main()
{
     char ch;
     printf("enter character :");
     scanf("%c",& ch);
     if(ch>='A'&&ch<='Z')
     {
         printf("it is upper case ");
     }
     else if (ch>='a'&&ch<='z')
     {
         printf("it is lower  case");
     }
     else if(ch>='0'&&ch<='9')
     {
         printf("it is digit");
     }
     else
     {
         printf("it is a special caracter");
     }
     getch();
}