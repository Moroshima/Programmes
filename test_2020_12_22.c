#include <stdio.h>

/*
struct exam
{
    int x,y;
}v1;

int main(void)
{
    //exam.x=10;
    //struct exam v2={10};
    //exam  v2;  v2.x=10;   
    //struct v2;  v2.x=10; 
}
*/

/*
struct STD
{
    char name[10];
    int age;
    char sex;
}s[5],*ps;
ps=&s[0];
*/

/*
#include<stdio.h>
struct stru 
{   int x; 
    char c; 
}; 
void func(struct stru *b) 
{ b->x=20; 
    b->c='y'; 
} 
int main() 
{ 
struct stru a={10,'x'},*p=&a; 
    func(p); 
    printf("%d,%c\n",a.x,a.c); 
    return 0;
}
*/

//struct { int m, n; } arr[2] = { { 11, 22 }, { 33, 44 } }, *ptr = arr;
/*
struct 
{   int x; 
    char *y; 
}sa[2]={{1,"ab"},{2,"cd"}},*p=sa; 
int main(void)
{
    //printf("%d",(++ptr)->m);
    printf("%s",(++p)->y);
}
*/

 struct STD

{
    char name[10];
    int age;
    char sex;
}s[5],*ps;

int main(void)
{
    ps=&s[0];
    //scanf("%d",ps->age);
    scanf("%d",&s[0].age);
    scanf("%s",s[0].name);
    scanf("%c",&(ps->sex));
    printf("%s\n",s[0].name);
    printf("%d\n",s[0].age);
    printf("%c\n",s[0].sex);
}