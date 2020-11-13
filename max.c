#include <stdio.h>

int main(void)
{
int max(int x,int y);
int a,b,c;
printf("Please input two characters to compare\n");
scanf("%d,%d",&a,&b);
c=max(a,b);
printf("Max=%d\n",c);
return 0;
}

int max(int x,int y)
{
int z;
if(x>y)z=x;
    else z=y;
return(z);
}