#include <stdio.h>
int main()
{
    int num, rev= 0, remainder;
    printf("Enter the number to reverse: ");
    scanf("%d", &num);    
    do
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num/10;
    }while (num!= 0); 
    printf("The reversed number is: %d", rev);
    return 0;
}