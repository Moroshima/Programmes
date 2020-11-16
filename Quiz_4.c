//#include<stdio.h>
//int main(void)
/*{
    int i,sum=0;
    for(i=1; ;sum++) 
    {
        if (sum>10) break;
            sum+=++i;
    }
    printf("%d,%d",sum,i);
}*/
/*{
int a, b=0;

    for ( a=1 ; a<=3 ;a++ );
    printf("%d\n",a);
    b += a;
    printf("%d, %d\n",a,b);
}*/
/*{int  i,j,k=0;
 for (i=1;i<=3; i++)
     for (j=1;j<=i; j++)
         k+=i*j;
    printf("%d\n",k);
}*/
/*{
int x;
 scanf("%d",&x);
 switch  ( x ) 
    {    
    case 9:   x++; break;
       case 10:  x++;  
       case 11:  x++; break;
       default:  x++;
    }
    printf("%d\n",x);
}*/
/*#include <stdio.h>

int main( )

{

     int m=0, n=4521;

     do

{

            m = m * 10 + n % 10;

            n /= 10;

     }while(n);

     printf( "%d\n", m );

     return 0;

}*/
/*#include <stdio.h>

int main( )

{

     int x, y=0, z=0;

     for ( x=1 ; x<=5 ; x++ )

     {

            y = y + x;

            z = z + y;

}

      printf( "%d\n", z );

    return 0;

}*/
/*#include<stdio.h>

int main( )

{

int a=1, b=2;

for( ; a<8 ; a++ )

{

        a += 2;

            if ( a == 6 )

                    continue;

            if ( a > 7 )

                    break;                 

            b++;

     }

printf( "%d,%d\n", a, b );

     return 0;
}*/