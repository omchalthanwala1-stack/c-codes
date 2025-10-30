#include<stdio.h>
int main()
{
    int n;
    printf("enter a character : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("this month have 31 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("this month have 30 days");
            break;
        case 2:
            printf("this month have 28 days");
            break;
        default:
            printf("wrong choice");
            break;
    }
    return 0;
}