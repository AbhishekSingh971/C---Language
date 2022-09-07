#include <stdio.h>

int main()
{
    int factorial, num, i=1;
    printf("enter the value of num:");
    scanf("%d", &num);

    while (i<=num)
    {
        factorial *= i;
        i++;
    }
    printf("the value of factorial %d is %d", num, factorial);

    return 0;
}