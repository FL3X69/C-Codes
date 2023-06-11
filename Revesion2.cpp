#include<stdio.h>
int s_sort(int a[],int i,int j)
{
    int m,l,p;
    m=a[i];
    l=i;
    for(p=i+1;p<j;p++)
    {
        if(m>a[p])
        {
            m=a[p];
            l=p;
        }
    }
    return l;
}
int main()
{
    int a[100],i,j,l,t;
    printf("Enter the number of items:-");
    scanf("%d",&j);
    printf("Enter the items:-");
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<j;i++)
    {
        l=s_sort(a,i,j);
        t=a[i];
        a[i]=a[l];
        a[l]=t;
    }
    printf("The sorted array:-");
    for(i=0;i<j;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}