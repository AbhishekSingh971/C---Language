#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("Enter a number between 1 to 10000000 : ");
    scanf("%d", &a);

    if (a < 1000)
    {
        printf("%d", a);
    }

    else if (a >= 1000 && a < 100000)
    {
        if (a % 1000 == 0)
        {
            printf("000\n");
            printf("%d", a / 1000);
        }
        else
        {
            printf("%d\n", a % 1000);
            printf("%d", a / 1000);
        }
    }

    else if (a >= 100000 && a < 10000000)
    {
        if (a % 1000 == 0)
        {
            printf("000\n");
            if (a % 100000 == 0){
                printf("00\n");
            }else{
                printf("%d\n", (a / 1000) % 100);
            }
            printf("%d", a / 100000);
        }
        else
        {
            printf("%d\n", a % 1000);
            printf("%d\n", (a / 1000) % 100);
            printf("%d", a / 100000);
        }
    }

    else if (a >= 10000000 && a <= 100000000)
    {
        if (a % 1000 == 0)
        {
            printf("000\n");
            if (a % 100000 == 0){
                printf("00\n");
            }else{
                printf("%d\n", (a / 1000) % 100);
            }
            if (a % 10000000 == 0){
                printf("00\n");
            }else{
                printf("%d\n", (a / 100000) % 100);
            }
            printf("%d", a / 10000000);
        }
        else
        {
            printf("%d\n", a % 1000);
            printf("%d\n", (a / 1000) % 100);
            printf("%d\n", (a / 100000) % 100);
            printf("%d", a / 10000000);
        }
    }
    else{
        exit(0);
    }
    
    return 0;
}