#include<stdio.h>
int main()
{
    int arr[100],i,n,newvalue,index;
    printf("How many elements ?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number : ");
        scanf("%d",&arr[i]);
    }
    printf(" Enter index of element to be replaced : ");
    scanf("%d",&index);
    if(index>=0&&index<n)
    {
        printf("Enter new value : ");
        scanf("%d",&newvalue);
        arr[index]=newvalue;
        printf("update array :");
        for(i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    else
    {
        printf("Invalid index");
    }
    return 0;
}