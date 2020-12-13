#include<stdio.h>

int main(void)
{
    int arr[1000];
    int x=5,y=6;
    x+=x++||++y;
    printf("%d,%d\n",x,y);
    arr[999]=1;
    printf("%d\n",arr[999]);
}