#include <stdio.h>
int n;
int even_odd(int n);
int main() 
{
    printf("Enter a number: ");
    scanf("%d",&n);
    even_odd(n);
}
int even_odd(int n) 
{
    if(n%2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
}
