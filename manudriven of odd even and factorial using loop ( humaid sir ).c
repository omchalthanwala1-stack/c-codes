#include<stdio.h>
int main()
{
int a, b, ch;
printf( "Enter number 1: ");
scanf ("%d", &a) ;
printf( "Enter number 2: ");
scanf ("%d", &b) ;
printf("1: Odd Numbers \n");
printf("2: Even Numbers \n");
printf("3: Factorial\n");
printf("Enter choice : ");
scanf("%d",&ch);
switch(ch)
{
    case 1:
        if (a < b)
        {
            for (int i = a; i <= b; i++)
            {
                if (i % 2 != 0)
                {
                printf("%d\n",i);
                }
            }
        }      
        else 
        {
            for (int i = a; i >= b; i--)
            {
                if (i % 2 != 0){
                printf("%d\n", i);}
            }
        }
        break;
        
    case 2:
        if (a < b)
        {
        for (int i = a; i <= b; i++)
        {
        if (i % 2 == 0)
        {
        printf("%d\n", i);
        }
        }
        } 
        else 
        {
        for (int i = a; i >= b; i--)
        {
        if (i % 2 == 0)
        {
        printf("%d\n", i);
        }
        }
        }
        break;
        
    case 3:
    {
        int ch2, num = 0, fact = 1;
        printf("Select number to find fiactorial :\n");
        printf("1: %d\n", a);
        printf("2: %d\n", b);
        printf("Chose an option between 1 & 2 : ");
        scanf ("%d", &ch2) ;
        switch(ch2) 
        {
            case 1:
                num = a;
                break;
            case 2:
                num = b;
                break;
            default:
                printf( "Invalid selection\n");
                break;
        }
    for (int i = 1; i < num; i++) 
    {
    fact *= i;
    printf("Factorial: %d\n", fact); 
    }
    return 0;
    }
    break;
    
    default:
    printf("Enter valid choice. \n");
    break;
}
return 0;
}