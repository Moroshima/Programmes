#include <stdio.h>
int main()
{
    //������λ��num,��λ��sd,ʮλ��td,��λ��hd
    int num, sd, td, hd;
    //ѭ��������λ��
    for(num=100;num<1000;num++)
    {
        //��ȡ��λ����num��λ�ϵ�����
        hd = num/100;
        //��ȡ��λ����numʮλ�ϵ�����
        td = (num/10)%10;
        //��ȡ��λ����num��λ�ϵ�����
        sd = num%10;
        //ˮ�ɻ�����������ʲô��
        if(hd*hd*hd+td*td*td+sd*sd*sd==num) 
        {
            printf("ˮ�ɻ����֣�%d\n", num);    
        }
    }
    return 0;    
}