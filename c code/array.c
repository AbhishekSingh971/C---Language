#include <stdio.h>

int main()
{
    int a[10],i;
    for(i=0; i<10 ;i++)
    {
        printf("enter the element of array:");
        scanf("%d",&a[i]);
    }
for(i=0 ; i<10 ;i++)
{
    printf( " %d ", a[i]);
    printf("\n");
}
     return 0;
}