#include <stdio.h>
int main() 
{
    int score = 7200;
    //����һ�´���
    if(score>=10000)
    {
        printf("��ʯ���");
    }
    else if(score>=5000)
    {
        printf("�׽����");    
    }
    else if(score>=1000)
    {
        printf("��ͭ���");     
    }
    else if(1000>score)
    {
        printf("��ͨ���");    
    }
    return 0;
}