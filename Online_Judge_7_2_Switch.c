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
    int min=*a,temp,*b=a,m;
    m=n;
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)   //i<10为临时判断条件，需要修改 注：已修改
        {
            if(*a<*b)
            {
                temp=*b;
                *b=*a;
                *a=temp;
            }
            a++;
        }
        b++;
        a=b;
        m--;
    }
}