#include<stdio.h>
#include<conio.h>
void simple_interest();
void main()
{
	//clrscr();
	simple_interest();
	getch();
}
void simple_interest()
{
	int p,r,t,si;
	printf("Enter principal :");
	scanf("%d",&p);
	printf("Enter rate :");
	scanf("%d",&r);
	printf("Enter time :");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("Simple interest = %d",si);
}
