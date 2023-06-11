#include<stdio.h>
int main()
{
    int a[20][30],b[50][50],c1,r1,i,j;
    printf("Enter the no. of rows and coloumns of the matrix:-");
    scanf("%d%d",&r1,&c1);
    printf("Enter the matrix:-");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Entered matrix:-\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("The Transpose matrix:-\n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}