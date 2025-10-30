#include<stdio.h>
int main()
{ 
    int a[100][100],b[100][100],c[100][100],r1,c1,r2,c2;
    printf("enter row of matrix A = ");
    scanf("%d",&r1);
    printf("enter coloumn of matrix A = ");
    scanf("%d",&c1);
    printf("enter row of matrix B = ");
    scanf("%d",&r2);
    printf("enter coloumn of matrix B = ");
    scanf("%d",&c2);
    if(r1==r2 && c1==c2)
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf(" enter elements of matrix A[%d][%d]",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf(" enter elements of matrix B[%d][%d]",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%3d",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf(" Addition of matrix is not possible ");
    }
    return 0;
}