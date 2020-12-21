#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[100]={0};
    gets(str);
    for(int i=0;i<strlen(str);)
        if(str[i]>='0'&&str[i]<='9')
        {
            i++;
            continue;
        }
        else for(int j=i;str[j]!='\0';j++)
            str[j]=str[j+1];
    puts(str);
}