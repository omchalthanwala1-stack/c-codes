#include <stdio.h>
int main()
{
    int sum=0,no;
    printf("enter number :");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
    {
        sum+=i;
    }
    printf("sum of first %d number is :%d\n",no,sum);
    return 0;
}