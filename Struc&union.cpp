#include<stdio.h>
#include<string.h>
union u1
{
    int i;
    float f;
    char str[20];
}uu;
struct s1
{
    int i;
    float f;
    char str[20];
}ss;
int main()
{
    printf("Size of union = %d bytes\n",sizeof(uu));
    printf("Size of structure = %d bytes",sizeof(ss));
    return 0;
}