#include<stdio.h>
int main()
{
    int arr[100],i,n,element,max,min;
    printf("How many elements ?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number : ");
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=1;i<n;i++)
    {
    	if(arr[i]>max)
    	{
    		max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf(" Maximum :- %d\n",max);
	printf(" Minimum :- %d\n",min);
	return 0;
}
