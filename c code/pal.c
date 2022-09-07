#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int reverse = 0;
    int original = num;

    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }

    if (reverse == original)
    {
        printf("%d is Palindrome", original);
    }
    else
    {
        printf("%d is not Palindrome.", original);
    }
    return 0;
}