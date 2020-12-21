#include <stdio.h>

int main(void)
{
    long int m;
    char s[]="0123456789ABCDEF";
    char storage[100]={0};
    char *p=storage;
    scanf("%ld",&m);
    while(m!=0)
    {
        *p++=s[m%16];
        m=m/16;
    }
    while(p>storage)
        printf("%c\n",*--p);
    return 0;
}