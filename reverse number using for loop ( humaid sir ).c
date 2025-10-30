#include<stdio.h>
int main()
{
    int num,rev=0,remainder,a; 
    printf("Enter the number to reverse: ");
    scanf("%d",&num);
    a=num;
    for(;num>0;)
    {
        remainder=num%10;
        rev=rev*10+remainder;
        num=num/10;
    }
    printf("Reverse of %d is %d",a,rev);
    return 0;
}