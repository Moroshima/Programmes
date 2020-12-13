#include <stdio.h>

int move(int *p)
{
    int temp;
    temp=*p;
    for(int i=0;i<9;i++)
        {
            *p=*(p-1);
            p--;
            //printf("%d\n",*p);
        }
    *p=temp;

}


int main(void)
{
    int m;
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    scanf("%d",&m);
    for(int i=0;i<m;i++)
        move(&array[9]);
    //printf("%d\n",array[0]);
    for(int i=0;i<=9;i++)
        printf("%3d",array[i]);
    printf("\n");
    return 0;
}
    