#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fp;
    fp=fopen("om.txt","a");
    fprintf(fp,"data science");
    if(fp==NULL)
    { 
        printf(" FILE IS NOT OPENED");
    }
    return 0;
}