#include<stdio.h>
#include<string.h>
union u1
{
    int i;
    float f;
    char str[20];
};
int main()
{
    union u1 uu;
    uu.i=10;
    uu.f=220.5;
    strcpy(uu.str,"C programming");
    printf("The integer is %d\n",uu.i);
    printf("The float is %f\n",uu.f);
    printf("The string is %s\n",uu.str);
    return 0;
}