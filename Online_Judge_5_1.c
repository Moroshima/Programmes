#include <stdio.h>
#include <math.h>
#define PI 3.14

double surface(double r,double h)
{
    double surf;
    surf = PI * r * r + r * PI * pow( pow(r,2) + pow(h,2),0.5);
    return surf;
}

double volume(double r,double h)
{
    double vol;
    vol = PI * r * r * h/3.0;
    return vol;
}

int main(void)
{
    double r,h,vol,surf;
    scanf("%lf%lf",&r,&h);
    vol = volume(r,h);
    surf = surface(r,h);
    printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n",r,h,surf,vol);
    return 0;
}