#include <stdio.h>
#include<conio.h>
void main()
{
    int dividend, divisor;
    float quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d",&dividend);
    printf("Enter divisor: ");
    scanf("%d",&divisor);
    quotient = (float)dividend /(float)divisor;
    remainder = (float)dividend %(float)divisor;
    printf("Quotient = %f\n",quotient);
    printf("Remainder = %f",remainder);
    getch();
}