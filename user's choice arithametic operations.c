#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("\nInput your choice to make an operation\n");
    printf("\n1= Addition");
    printf("\n2= Substraction");
    printf("\n3= Multiplication");
    printf("\n4= Division");
    printf("\n5= Modulus");
    printf("\nEnter your choice: ");
    scanf("%d", &c);
    if (c== 1) 
    {
        printf("Addition of %d + %d = %d\n", a, b, a + b);
    } 
    else if (c== 2) 
    {
        printf("Substraction of %d - %d = %d\n", a, b, a - b);
    }
    else if (c== 3) 
    {
        printf("Multiplication of %d * %d = %d\n", a, b, a * b);
    }
    else if (c== 4) 
    {
        printf("Division of %d / %d = %f\n", a, b, (float)a / b);
    } 
    else if (c== 5)
    {
        printf("Modulus of %d %% %d = %d\n", a, b, a % b);
    } 
    else
    {
        printf("Kindly input correct choice!\n");
    }
    return 0;
}
