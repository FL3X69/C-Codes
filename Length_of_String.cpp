#include<stdio.h>
int main()
{
    char a[30];
    int c=0;
    printf("Enter the string:-");
    gets(a);
    while(a[c]!='\0')
    {
        c++;
    }
    printf("The desired length of the string:- %d",c);
    return 0;
}
