/*
#include <stdio.h>
int main(void)
{
//int a[ ]={15,12,-9, 28,5, 3 },*p=a;
int a=1,*p=&a;*p=2; 
printf("%d\n",p);
}
*/

/*
#include <stdio.h>
#define N 5
int fun(int *s, int a, int n)
{    
     int j;
    *s=a;

     j=n;
    while(a!=s[j])

           j--;
    return j;
}
int main()
{
     int s[N+1]; int k;
     for(k=1; k<=N; k++)
         s[k]=k+1;
      printf("%d\n",fun(s,4,N));
      return 0;
}
*/

/*
#include <stdio.h>
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
#include<stdio.h>
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
#include<stdio.h>
int main()
{
    int a=10,*p=&a,**q=&p;
    printf("%d",*q);
}
*/

/*
#include<stdio.h>
int main()
{
    double x[10]={0},*p=x;
    scanf("%lf",p+6);
    for(int i=0;i<=9;i++)
        printf("%d ",x[i]);
}
*/

#include <stdio.h>
#define N 5
int fun(int *s, int a, int n)
{    
     int j;
    *s=a;

     j=n;
    while(a!=s[j])

           j--;
    return j;
}
int main()
{
     int s[N+1]; int k;
     for(k=1; k<=N; k++)
         s[k]=k+1;
      printf("%d\n",fun(s,4,N));
      return 0;
}