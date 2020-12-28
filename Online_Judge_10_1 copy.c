#include <stdio.h>
#include <string.h>

struct Student
{
    int count;
    char name[10];
    int math;
    int phys;
    int eng;
}student[10];

int main(void)
{
    //struct Student student[10];

    int num,ave,data1,data3,data4,data5;
    char data2[10];
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d %s %d %d %d",&data1,&data2,&data3,&data4,&data5);
        student[i].count=data1;
        strcpy(student[i].name,data2);
        student[i].math=data3;
        student[i].phys=data4;
        student[i].eng=data5;
    }
    for(int i=0;i<num;i++)
    {
        ave=(student[i].math+student[i].phys+student[i].eng)/3;
        printf("The average score of the %dth student is %d.\n",i+1,ave);
    }
    return 0;
}