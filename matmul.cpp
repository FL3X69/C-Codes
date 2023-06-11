#include<stdio.h>
int main()
{
    int a[20][30],b[20][30],c[20][30],c1,c2,r1,r2,i,j,k;
    printf("Enter the number of rows and coloums of the first matrix:-");
    scanf("%d%d",&r1,&c1);
    printf("Enter the matrix:-");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of rows and coloums of the second matrix:-");
    scanf("%d%d",&r2,&c2);
    printf("Enter the matrix:-");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(r1==c2 || r2==c1)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("The result is:-\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf(" %d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Rows of one matrix is not equal to the coloumn of the other matrix.");
    }
    return 0;
}