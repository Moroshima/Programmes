#include<stdio.h>
int main(void)
{
    int x,y,z;
    printf("������һ������Ϊx\n");
    scanf("%d",&x);
    printf("������һ������Ϊy\n");
    scanf("%d",&y);
    printf("������һ������Ϊz\n");
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
            if(x>z)                                             //x<y��ǰ���±�д
                {
                    printf("y>x>z\n");
                }
                else                                            //x<z��x<y
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