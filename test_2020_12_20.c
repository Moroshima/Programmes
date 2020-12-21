#include <stdio.h>
#include <string.h>

int main(void)
{
    /*
    int i=0;
    char *s="a\041#041\\b";
    while(*s++) i++;
    printf("%d\n",i);
    */
    
    /*
    char str[5]="good!";
    char str[6]={'g','o','o','d','!','\0'};
    char str[]={"good!"};
    char *str="good!";
    char ch[20],*str=ch;
    strcpy(ch, "teacher");
    printf("%d\n",strlen("b\013c\xac\\abc\n"));
    */

    /*
    char b[]="Hello, you!";
    b[5]=0;
    printf("%s\n",b);
    return 0;
    */

    /*
    char s[]="123", t[]="abcd";
    if(*s>*t)
    printf("%s\n",s);
    else
        printf("%s\n",t);
    return 0;
    */
    
    /*
    char *p="abcdefghijklmnopq";
    while (*p++!='e');
        printf("%c\n",*p);
    */

    char *str, **s=&str; 
    //*s='A';
    //s="computer";
    //**s="computer";
    *s="computer";
    puts(s);

    /*
    char s1[ ]="Basic", s2[ ]="Base"; 
    if (strcmp(s1,s2))
    strcpy(s1, s2);
    */

    /*
    char a[7]="abcdef", b[4]="ABC";
    strcpy(a,b);
    printf("%c\n",a[4]);
    */

    //char s[20]="programming", *ps=s;

    /*
    char s1[ ]="I Like Pizza!";
    strupr(s1);
    puts(s1);
    */

    /*
    char ch[20],*str=ch;
    
    strcpy(str,"teacher");
    str="teacher";
    strcpy(ch, "teacher");
    ch="teacher";
    */
}