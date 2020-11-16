#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c;
    scanf("%lf,%lf,%lf",&a,&b,&c);
    if((a*a+b*b)<c*c||(a*a+c*c)<b*b)
        {
           printf("这是一个等边三角形\n"); 
        }
}
