#include <stdio.h>

int main()
{
    int i, num, j;
    printf("enter the number :");
    scanf("%d", &num);
    for (j = 1; j <= 1000; j++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d \n", num, i, num * i);
        }
        num+=1;
    }
    return 0;
}