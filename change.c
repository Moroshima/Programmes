#include <stdio.h>
int main()
{
    int price;
    printf("Price\n");
    scanf("%d",&price);
    int change = 100 - price;
    printf("%d",change);
    return 0;

}