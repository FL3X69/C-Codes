#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=4;a++)
    {
        if(a==1||a==4)
        {
            for(b=1;b<=4;b++)
            {
                printf("%s","*");
            }
        }
        else
        {
            printf("%s","*  *");

        }
        printf("\n");
    }
    return 0;
}

