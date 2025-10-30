#include <stdio.h>
#include<conio.h>
void main()
{  
    int ch;
    printf("Enter a digit: ");
    scanf("%d", &ch);  
    printf("ASCII value of %d = %c", ch, ch);
    getch();
}