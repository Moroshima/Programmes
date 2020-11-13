#include<stdio.h>
int main(void)
{
   int n=2;
   n+=n-=n*=n;
   printf("%d",n);
}