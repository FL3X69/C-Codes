#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the no. of rows:-");
    scanf("%d",&a);
    for(b=1;b<=a;b+=2)
    {
        for(c=b;c<a;c++)
        {
            printf(" ");
        }
        for(c=1;c<=b;c++)
        {
            printf(" *");
        }
        printf("\n"); 
    }
    return 0;
}