#include <stdio.h>

int main()
{
    int prime[25], composites[75];
    int c = 0;
    int p = 0;
    for (int i = 2; i <= 100; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            prime[p] = i;
            p++;
        }
        else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            prime[p] = i;
            p++;
        }
        else
        {
            composites[c] = i;
            c++;
        }
    }
    printf("Composite Number : [ ");

    for (int i = 0; i < 74; i++)
    {
        // if (i == 73)
        // {
        //     printf("%d ", composites[i]);
        //     printf("]");
        // }
        // else
        // {
        //     printf("%d, ", composites[i]);
        // }
           
        (i==73)? printf("%d ]", composites[i]):printf("%d, ", composites[i]);
    }
    printf("\n");
    printf("Prime Number : [ ");
    for (int i = 0; i < 25; i++)
    {
        // if (i == 24)
        // {
        //     printf("%d ", prime[i]);
        //     printf("]");
        // }
        // else
        // {
        //     printf("%d, ", prime[i]);
        // }
        (i==24)? printf("%d ]", prime[i]):printf("%d, ", prime[i]);
    }

    return 0;
}