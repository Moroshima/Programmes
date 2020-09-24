#include<stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,sum;
    printf("请输入第一个数字\n");
    scanf("%d",&a);
    printf("请输入第二个数字\n");
    scanf("%d",&b);
    sum=a+b;
    printf("这两个数字的和是%d\n",sum);
    system("pause");
    return 0;
}