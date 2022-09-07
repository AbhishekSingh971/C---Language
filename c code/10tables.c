#include <stdio.h>

int main()
{
    int j, i, num;
    printf("enter the number:");
    scanf("%d", &num);

    for (j = 1; j <= 10; j++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d =%d\n", num, i, num * i);
        }
        printf("\n");
        num += 1;
    }
    return 0;
}