#include <stdio.h>
#include <conio.h>
void even_odd();
void main() 
{
    even_odd();
	getch();
}
void even_odd() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
}
