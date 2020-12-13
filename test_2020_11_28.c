#include <stdio.h>

void f(int,double);

int main(void)
{
    int x;
    double y,z;
    z=3.141592;
    f(x,y);
    int a;
    a=sizeof("\"x\34\b\xab\\\ab\n");
    a='\127';
    printf("%.3f\n",z);
    printf("test\n");
}

void f(int x,double y)
{
    return 0;
}