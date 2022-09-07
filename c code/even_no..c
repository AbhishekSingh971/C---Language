#include <stdio.h>

int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d", &num);

    for (num; num <= 100; num++)

        if (num % 2 == 0)
        {
            printf("the number is %d and it is even\n", num);
        }
    return 0;
}