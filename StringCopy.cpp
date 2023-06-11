#include<stdio.h>
int main()
{
    char a[30],b[30];
    int c=0;
    printf("Enter the string:- ");
    gets(a);
    while(a[c]!='\0')
    {
        b[c]=a[c];
        c++;
    }
    printf("The copied string:- %s",b);
    return 0;
}
