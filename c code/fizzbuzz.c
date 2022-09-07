#include <stdio.h>
void main()
{

    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
        {
            printf("%d FIZZBUZZ\n", i);
        }

        else if (i % 3 == 0)
        {
            printf("%d FIZZ\n", i);
        }

        else if (i % 5 == 0)
        {
            printf("%d BUZZ\n", i);
        }
    }
}