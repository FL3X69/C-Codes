#include<stdio.h>
#include<math.h>
int main()
{
    long a,b,c=0,d=0,e,f;
    printf("Enter a number:-");
    scanf("%ld",&a);
    e=a;
    f=e;
    while(a>0)
    {
        c+=1;
        a/=10;
    }
    while(e>0)
    {
        b=e%10;
        d+=pow(b,c);
        e/=10;
    }
    if(d==f)
    {
        printf("It is a armstrong number.");
    }
    else
    {
        printf("It is not an armstrong number.");
    }
    return 0;
}
