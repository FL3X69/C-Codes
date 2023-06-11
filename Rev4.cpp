#include<stdio.h>
int main()
{
    char a[30],b[30];
    int i=0,j=0,k=0;
    printf("Enter the string:-");
    gets(a);
    while(a[i]!='\0')
    {
        i++;
    }
    i=i-1;
    while(a[j]!='\0')
    {
        b[j]=a[i];
        j++;
        i--;
    }
    j=0;
    while(a[j]!='\0')
    {
    if(a[j]==b[j])
    k=1;
    else
    k=0;
    j++;
    }
    if(k==1)
    {
        printf("Its a palindrome");
    }
    else
    {
        printf("Its not a palindrome");
    }
    return 0;
}