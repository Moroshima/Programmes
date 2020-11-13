#include<stdio.h>
#include<math.h>
int main(void)
{
    int k=1,n=1,flag=1;
    double m,s=0;
    scanf("%lf",&m);
    while((1/n)*pow(m,k)>=1e-4)
    {
        n*=k;
        s+=flag*pow(m,k)/n;
        k++;
        flag=-flag;
    }
    printf("%.2f\n",s);
}