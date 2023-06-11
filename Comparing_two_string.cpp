#include<stdio.h>
int main()
{
    int c=0,d=0;
    char a[30],b[30];
    printf("Enter the first string:-");
    gets(a);
    printf("Enter the second string:-");
    gets(b);
    while(a[c]!='\0' && b[c]!='\0')
    {
        if(a[c]==b[c])
        {
            d=1;
        }
        else
        {
            d=0;
        }
        c++;
    }
    if(d==1)
    printf("The strings are identical");
    else
    printf("The strings are non identical.");
    return 0;
}
