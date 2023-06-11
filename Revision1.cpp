#include<stdio.h>
void b_sort(int a[],int b)
{
    int m,g,t;
    for(m=0;m<b-1;m++)
    {
        for(g=0;g<b-1-m;g++)
        {
            if(a[g]>a[g+1])
            {
                t=a[g];
                a[g]=a[g+1];
                a[g+1]=t;
            }
        }
    }
}
int main()
{
    int a[100],i,j;
    printf("Enter the number of items:-");
    scanf("%d",&j);
    printf("Enter the numbers:-");
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    b_sort(a,j);
    printf("The sorted array:-");
    for(i=0;i<j;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}