#include <stdio.h>
int main()
{
    //定义三位数num,个位数sd,十位数td,百位数hd
    int num, sd, td, hd;
    //循环所有三位数
    for(num=100;num<1000;num++)
    {
        //获取三位数字num百位上的数字
        hd = num/100;
        //获取三位数字num十位上的数字
        td = (num/10)%10;
        //获取三位数字num个位上的数字
        sd = num%10;
        //水仙花数的条件是什么？
        if(hd*hd*hd+td*td*td+sd*sd*sd==num) 
        {
            printf("水仙花数字：%d\n", num);    
        }
    }
    return 0;    
}