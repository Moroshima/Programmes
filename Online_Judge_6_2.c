#include <stdio.h>

int fun(int a,int b,int r[])
{
    int i,count;
    count=0;
    for(i=a;i<=b;i++)
    {
        if(i%7||i%11)
            if(!(i%7&&i%11))
                {
                    r[count]=i;
                    count++;
                }
    }
    return count;
}

int main(void)
{
    int a,b,i,count;
    int array[1000];
    scanf("%d%d",&a,&b);
    count=fun(a,b,array);
    for(i=0;i<count;i++)
        {
            printf("%d",array[i]);
            if(i!=(count-1)) printf(" ");
        }
    return 0;
}