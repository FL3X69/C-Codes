#include<stdio.h>
int main()
{
    char a[30],b[30],c[60];
    int i=0,j=0;
    printf("Enter the first string:-");
    gets(a);
    printf("Enter the second string:-");
    gets(b);
    while(a[i]!='\0')
    {
        c[i]=a[i];
        i++;
        j++;
    }
    i=0;
    while(b[i]!='\0')
    {
        c[j]=b[i];
        i++;
        j++;
    }
    printf("The concatinated string:- %s",c);
    return 0;
}