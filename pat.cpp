#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    printf("Enter the number of rows:-");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        for(c=b;c<=a-1;c++)
        {
            printf("  ");
        }
        while(d!=(2*b-1))
        {
            printf("* ");
            d++;
        }
        d=0;
        printf("\n");
    }
    return 0;
}