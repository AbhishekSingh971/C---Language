#include <stdio.h>

int main()
{
    int i, num;
    printf("Please Enter a number between 1 to 100 : ");
    scanf("%d",&num);

    printf("All the Prime Numbers between 1 to %d are ", num);
    for (i = 2; i <num; i++)
    {
        if (i == 2 || i == 3 || i== 5 || i == 7)
        {
            printf("%d ",i);
        }
        
        else if ( i%2 == 0 || i%3 == 0 || i%5 == 0 || i%7 == 0 )
        {
            printf("");
        }

        else
        {
            printf("%d ",i);
        }
        
        
    }
     
    return 0;
}