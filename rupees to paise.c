// rupees to paise
#include <stdio.h>
#include<conio.h>
void main()
{
	float P;
	int r,paise;
	printf("Enter Total Rupees : ");
	scanf("%f",&P);
	r = P;
    paise = (P-r)*100;
	printf("\nTotal Rupees = %f",P);
	printf("\nConverted Rupees in paise = %d%d",r,paise);
    getch();
}
