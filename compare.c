#include<stdio.h>
int main(void)
{
    int x,y,z;
    printf("请输入一个数作为x\n");
    scanf("%d",&x);
    printf("请输入一个数作为y\n");
    scanf("%d",&y);
    printf("请输入一个数作为z\n");
    scanf("%d",&z);
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    if(x>y)
        {
        if(z>x)
            {
                printf("z>x>y\n");
            }
            else
            {
            if(z>y)
                {
                    printf("x>z>y\n");
                }
                else
                {
                    printf("x>y>z\n");
                }
            }
        }
        else
        {
            if(x>z)                                             //x<y的前提下编写
                {
                    printf("y>x>z\n");
                }
                else                                            //x<z且x<y
                {
                    if(z>y)
                    {
                        printf("z>y>x\n");
                    }
                    else
                    {
                        printf("y>z>x\n");
                    }
                }
                
        }
        
}