#include<stdio.h>
#include<stdlib.h>
int main( )
{
 FILE *fp; 
 char ch;
 int count=0;
 fp = fopen( "file.txt", "r" );
 if ( fp == 0 )
 {
  printf( "file error\n" );    
  exit(1);
 }
 ch = fgetc(fp);
 while( !feof( fp ) )
 {
  if ( ch >= 'a' && ch <= 'z')
   count++;
  ch = fgetc(fp);
 }
 printf( "%d\n", count);
 fclose( fp );
 return 0;
}