#include<stdio.h>
int main()
{
    int a,b,c,d=1;
    printf("Enter the number of rows:-");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        for(c=1;c<=b;c++)
        {
            printf("%d ",d);
            d+=1;
        }
        printf("\n");
    }
    return 0;
}