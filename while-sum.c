#include <stdio.h>
int main()
{
    int i,sum=0;
    i=1;
    while(i<=100)  //ѭ������Ӧ����ʲô�أ�
    {
        sum=sum+i;
        i=i+1;//�����ǲ���Ӧ�øı�ѭ��������ֵ
    }
    printf("100������������֮��Ϊ��%d\n", sum);
    return 0;
}