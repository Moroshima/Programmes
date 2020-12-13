#include <stdio.h>

int main(void)
{
    int i,max,min,max_count,min_count;
    double ave,sum;
    int array[10]={0};
    sum=0;
    max_count=0;
    min_count=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    min=array[0];
     for(i=0;i<10;i++)
    {
        if(array[i]>max) max=array[i];
        if(array[i]<min) min=array[i];
    }
    for(i=0;i<10;i++)
    {
        if(array[i]==max) max_count++;
        if(array[i]==min) min_count++;
    }
    for(i=0;i<10;i++)
    {
        sum+=array[i];
    }
    ave=(sum-max_count*max-min_count*min)/(10-max_count-min_count);
    printf("%lf",ave);
}