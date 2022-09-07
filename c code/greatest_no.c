#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the value of a : ");
    scanf("%d",&a);
    printf("enter the value of b : ");
    scanf("%d",&b);

    (a>b ) ? printf("%d is greater",a):printf("%d is greater",b);
     return 0;
}