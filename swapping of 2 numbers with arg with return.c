// swapping of two numbers with arg with return//
#include<stdio.h>
#include<conio.h>
int a,b,t,ans;
int swap(int * ,int *);
void main()
{
	printf("Enter two numbers :  ");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("a=%d",a);
	printf("b=%d",b);
	getch();
}
int swap(int *a, int *b)
{
	t=*a;
	*a=*b;
	*b=t;
}
