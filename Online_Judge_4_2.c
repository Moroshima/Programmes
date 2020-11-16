#include <stdio.h>

int main (void)
{
    int n,bottom,count=0;
    for(n=100;n<1011;n++)
    {
        for(bottom=2;bottom<n;bottom++)
        {
            if(n%bottom==0)
                break;   
        }
        if(bottom>=n)
        {
            count++;
            printf("%4d",n);
            if(count%8==0)
                printf("\n");
        }
    }
    if(count%8!=0)
        printf("\n");
}