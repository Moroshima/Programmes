/*#include<stdio.h>

 int main()

 {

        char X[6];

        int i;

        for(i=0;i<6;i++)

            X[i]=getchar();

        for(i=0;i<6;i++)

            putchar(X[i]);

        return 0;

 }*/
/*#include <stdio.h>

int main()

{

        static int a[3][3];

        int i,j;

        for (i=0;i<3;i++)

            for (j=0;j<3;j++)

                a[i][j]=a[j][i]+i*j;

    printf("%d,%d",a[1][2],a[2][1]);

        return 0;
    int a[3][5];
    printf("%d",sizeof(a));
}*/

/*#include <stdio.h>

#define N 20

void fun(int a[],int n,int m)

{   int i,j;

    for(i=m;i>=n;i--)

        a[i+1]=a[i];

}

int main()

{   int i,a[N]={1,2,3,4,5,6,7,8,9,10};

    fun(a,2,9);

    for(i=0;i<5;i++)

            printf("%d",a[i]);

    return 0;

}*/
#include<stdio.h>

int fun(int s[],int t[])

{    int i,j=0;

    for(i=0;i<10;i++)

         if(i%2)

         {   t[j]=s[i];

             j++;

         }

    return j;

}

  int main()

 {     int X[10]={1,2,3,4,5,6,7,8,9,10};

        int Y[10];

        int m,i;

        m=fun(X,Y);

        for(i=0;i<m;i++)

            printf("%d",Y[i]);

        printf("\n");

        return 0;

}