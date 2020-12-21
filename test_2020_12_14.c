#include <stdio.h>
/*
int main(void)
{
    int a[]={1,2,3,4,5,6},*p=a;
    p+=2;
    printf("%d\n",*p++);
}
*/

/*
void sub(int x,int y,int *z)
{
    *z=y-x;
}
int main()
{
    int a,b,c;
    sub(10,5,&a);
    sub(7,a,&b);
    sub(a,b,&c);
    printf("%d,%d,%d\n",a,b,c);
    return 0;
}
*/   

/*
void fun(int x,int *y)
{
     x+=*y;
    *y+=x;
}
int main( )
{
    int x=5,y=10;
    fun(x,&y);
    fun(y,&x);
     printf("%d,%d",x,y);
     return 0;
}
*/

/*
int main( )
{
  int arr[10]={2,3,-9,5,7,0,4,-1,6,-7},*p;
  int sum=0;
  for (p=&arr[3];p<arr+10;)
    sum+=*p++;
  printf("%d",sum);
  return 0;
}
*/
