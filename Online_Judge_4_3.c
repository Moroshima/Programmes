#include <stdio.h>
int main(void)
{
    int m,n,s;
    for(m=9;m>=1;m=m-2)
    {
        for(s=m;s<=7;s=s+2)
        {
            printf(" ");
        }
        for(n=m;n>=1;n--)
        {
            s=n-m;
            printf("*");
        }
        printf("\n");
    }
}