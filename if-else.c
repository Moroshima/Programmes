#include <stdio.h>
int main() 
{
    int score = 7200;
    //����һ�´���
    if(score>=10000)
    {
        printf("��ʯ���\n");
    }
    else if(score>=5000)
    {
        printf("�׽����\n");    
    }
    else if(score>=1000)
    {
        printf("��ͭ���\n");     
    }
    else if(1000>score)
    {
        printf("��ͨ���\n");    
    }
    return 0;
}