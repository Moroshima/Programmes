#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100],c;
    int i,j;
    gets(str);
    for(i=0,j=strlen(str);i<j;i++,j--)
    {
        c=str[j-1];
        str[j-1]=str[i];
        str[i]=c;
    }
    puts(str);
    return 0;
}