#include <stdio.h>
int main()
{   
    printf("Abhishek kumar singh\n");
	int i, j;
    char input,alphabet = 'A';
    printf("Enter the last alphabet");
    scanf("%c", &input);
    for ( i = 1; i <=(input - 'A' + 1); ++i)
    {
        for ( j = 1; j <=i; ++j)
        {
            printf("%c",alphabet);
        }
        ++alphabet;
        printf("\n");
    }
    
	return 0;
}
