#include <stdio.h>

void sort(int*,int);

int main(void)
{
    int *p=NULL,n;
    int array[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    p=array;
    sort(p,n);
    for(int i=0;i<n;i++)
        printf("%d  ",array[i]);
    printf("\n");

}

void sort(int *a,int n)
{
    int temp,*b;
    b=a;
    for(int i=0;i<(n-1);i++)
    {
        for(int i=0;i<(n-1);i++)
        {
            if(*(a+1)<*a)
            {
                temp=*a;
                *a=*(a+1);
                *(a+1)=temp;
            }
            //冒泡算法需要再套一层for循环
            //但该题要求使用交换法进行排序
            a++;
        }
        a=b;
    }
}