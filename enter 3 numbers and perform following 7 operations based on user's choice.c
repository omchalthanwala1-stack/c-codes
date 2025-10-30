
#include<stdio.h>
#define PI 3.14159
int main()
{
    int a,b,c,d;
    printf("Enter any three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("\nInput your choice to make an operation\n");
    printf("\n1= square");
    printf("\n2= cube");
    printf("\n3= area of circle");
    printf("\n4= no is even or odd");
    printf("\n5= simple interest");
    printf("\n6= swapping");
    printf("\n7= check max between 3 nos");
    printf("\nEnter your choice: ");
    scanf("%d", &d);
    if (d== 1) 
    {
        printf("square of %d * %d = %d\n", a,a,(a*a));
    } 
    else if (d== 2) 
    {
        printf("cube of %d*%d*%d = %d\n", a,a,a,(a*a*a));
    }
    else if (d== 3) 
    {
        float radius, area;
        printf("Enter Radius: ");
        scanf("%f", &radius);
        area = PI * radius * radius;
        printf("Area of the circle is: %.2f\n", area);
    }
    else if (d== 4) 
    {
        int a;
        printf("enter a number");
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("number is even");
        }
        else
        {
            printf("number is odd");
        }
    } 
    else if (d== 5)
    {
        int a,b,c,interest;
        printf("enter the value of Principal =");
        scanf("%d",&a);
        printf("enter the value of Rate =");
        scanf("%d",&b);
        printf("enter the value of Time =");
        scanf("%d",&c);
        interest=(a*b*c)/100;
        printf("the simple interest value = %d",interest);
    }
    else if (d==6)
    {
        int a,b,c;
    printf("enter the  value ofA");
    scanf("%d",&a);
    printf("enter the value of B");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("value of A=%d",a);
    printf("value of B=%d",b);
    }
    else if (d==7)
    {
        int a,b,c;
        printf("enter three numbers");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c)
        {
            printf("first number s maximum");
        }
        else if (b>a&&b>c)
        {
            printf("second number is maximum");
        }
        else
        {
            printf("third number is maximum");
        }
    }
    else
    {
        printf("Kindly input correct choice!\n");
    }
    return 0;
}