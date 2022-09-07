#include <stdio.h>

int main()
{
    int i,n,sum=0;
printf("enter the value of n:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
     int x;
    scanf("%d",&x);
    sum +=x;
}
printf("the sum of %d natural no. is %d",n,sum);

     return 0;
}