#include <stdio.h>
#define DAYS_FEB(year) year%4==0&&year%100!=0||year%400==0

int main(void)
{
    int year,day;
    scanf("%d",&year);
    if(DAYS_FEB(year))
        day=29;
    else day=28;
    printf("days of the FEB.: %d\n",day);
    return 0;
}