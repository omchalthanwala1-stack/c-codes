#include<stdio.h>
int main()
{
    int a[8],i,sum=0;
    for(i=0;i<7;i++)
    {
        printf(" Enter element [%d] : ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf(" Sum of all values is = %d",sum);
    return 0;
}