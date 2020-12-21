#include <stdio.h>
#include <math.h>

int fac (int n)
{
    int m,sum=1;
    while (n!=1)
    {
        sum*=n;
        n--;
    }
    return sum;
}

int main(void)
{
    int flag=1;
    double common,s,m;
    scanf("%lf",&m);
    for(int n=1;fabs(flag*pow(m,n)/fac(n))>=1e-4;n++)
    {
        common=flag*pow(m,n)/fac(n);
        flag=-flag;
        s+=common;
        //printf("%f,%d",common,n);
    }
    printf("%.2f\n",s);
}