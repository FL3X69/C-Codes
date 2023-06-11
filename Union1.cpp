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
    printf("The integer is %d\n",uu.i);
    uu.f=220.5;
    printf("The float is %f\n",uu.f);
    strcpy(uu.str,"C programming");
    printf("The string is %s\n",uu.str);
    return 0;
}