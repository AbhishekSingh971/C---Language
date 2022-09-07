#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand() % 1000 + 1; // generate a random number
    printf("the random number is %d\n", number);

    do
    {
        printf("\t\tguess the number between 1 to 1000:  \n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("lower no please!\n");
        }
        else if (guess < number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("you guess the number in %d times\n", nguesses);
        }
        nguesses++;
    }
    while (guess != number);

    return 0;
}