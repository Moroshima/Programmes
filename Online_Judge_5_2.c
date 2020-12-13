#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int judgeprime(int n)
{
	int judge=1;
	if(n==1)
		judge=0;
	int k=(int)sqrt(n);
	for(int i=2;judge&i<=k;i++)
		if(n%i==0)
			judge=0;
	return judge;
}

int main(void)
{
	int n,count=4;
	for(int i=4;i<=2000;i+=2)
		for(n=2;n<i;n++)
			if(judgeprime(n))
				if(judgeprime(i-n))
                	{
						printf("%4d=%4d+%4d",i,n,i-n);
                        count++;
                        if(count%4==0) printf("\n");
                        else printf(" ");
						break;
				    }
	if(count%4!=0) printf("\n");
	system("pause");
	return 0;
};