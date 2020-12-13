#include <stdio.h>

int main(void)
{
    int sum,year,month,day,cycle;
    int array[12]={31,0,31,30,31,30,31,31,30,31,30,31};
    sum=0;
    scanf("%d-%d-%d",&year,&month,&day);
    if(year%4==0&&year%100!=0||year%400==0)
        array[1]=29;
        else array[1]=28;
    for(cycle=0;(cycle+1)<month;cycle++)
        {
            sum+=array[cycle];
        }
    sum+=day;
    printf("%d\n",sum);
}