#include<stdio.h>
int main()
{
    int arr[100],i,n,element;
    printf("How many elements ?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number : ");
        scanf("%d",&arr[i]);
    }
    printf(" Enter element to search : ");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(element==arr[i])
        {
            printf("element %d found at index %d",element,i);
            break;
        }
    }
    if(i==n)
    {
        printf("element %d not found in the array \n",element);
    }
    return 0;
}