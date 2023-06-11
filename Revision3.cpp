#include<stdio.h>
int main()
{
    int a[100],c1,c2,t,c;
    printf("Enter the number of elements:-");
    scanf("%d",&c);
    printf("Enter the elements:-");
    for(c1=0;c1<c;c1++)
    {
        scanf("%d",&a[c1]);
    }
    for(c1=1;c1<c;c1++)
    {
        t=a[c1];
        c2=c1-1;
        while((t<a[c2]) && (c2>=0))
        {
            a[c2+1]=a[c2];
            c2=c2-1;
        }
        a[c2+1]=t;
    }
    for(c1=0;c1<c;c1++)
    {
        printf("%d ",a[c1]);
    }
    return 0;
}