#include <stdio.h>
int main() 
{
    int score = 7200;
    //完善一下代码
    if(score>=10000)
    {
        printf("钻石玩家\n");
    }
    else if(score>=5000)
    {
        printf("白金玩家\n");    
    }
    else if(score>=1000)
    {
        printf("青铜玩家\n");     
    }
    else if(1000>score)
    {
        printf("普通玩家\n");    
    }
    return 0;
}