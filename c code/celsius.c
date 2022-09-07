#include <stdio.h>

int main()
{
     int c, f;
    printf("enter value in degree celsius: ");
    scanf("%d", &c);
    f = (c * 9 / 5) + 32;
    printf("changed value in fahre. : %d", f);
    return 0;
}