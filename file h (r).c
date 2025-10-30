#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fp;
    fp=fopen("om.txt","r");
    if(fp==NULL)
    { 
        printf(" FILE IS NOT OPENED");
    }
    return 0;
}