//area of circle
#include<stdio.h>
#include<conio.h>
#define PI 3.14159
int main()
{
   float radius, area;
   printf("Enter Radius: ");
   scanf("%f", &radius);
   area = PI * radius * radius;
   printf("Area of the circle is: %.2f\n", area);
   return 0;
}