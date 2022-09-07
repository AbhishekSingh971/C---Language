#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (num; num <= 100; num++)
    {
        if (num % 2 == 0)
        {
            printf("the number is %d and it is even\n", num);
        }

        else if(num % 2 != 0)
        {
            printf("The number is %d and it is odd\n", num);
        }
    }
    return 0;
}