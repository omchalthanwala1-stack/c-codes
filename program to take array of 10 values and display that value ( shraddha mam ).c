#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf(" Enter element [%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("value of [%d] is %d\n ",i,a[i]);
    }
    return 0;
}