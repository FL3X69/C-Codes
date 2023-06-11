#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,g;
    printf("Enter the coefficient of x^2,x and the constant term respectively:-");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf("The roots are real and distinct.");
        e=sqrt(d);
        f=(-b+e)/(2*a);
        g=(-b-e)/(2*a);
        printf("\nThe roots are:- %f and %f",f,g);
    }
    else if(d==0)
    {
        printf("The roots are real and equal.");
        f=-b/2*a;
        g=-b/2*a;
        printf("\nThe roots are:- %f and %f",f,g);
    }
    else
    {
        printf("The roots are unreal.");
        e=sqrt(-d);
        f=(-b/2*a);
        g=(e/2*a);
        printf("\nThe roots are:- %f + %fi and %f - %fi",f,g,f,g);
    }
    return 0;
}
