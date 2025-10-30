#include<stdio.h>
#include<conio.h>
int a,b;
void add(int,int);
void main()
{
	printf("Enter value of A :");
	scanf("%d",&a);
	printf("Enter value of B :");
	scanf("%d",&b);
	add(a,b);
	getch();
}
void add(int a,int b)
{
	int s;
	s=a+b;
	printf("Sum=%d",s);
}
