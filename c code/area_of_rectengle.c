#include <stdio.h>

int main()
{
    int l, b, area;
    printf("l:");
    scanf("%d", &l);
    printf("b:");
    scanf("%d", &b);
    area = l * b;
    printf("area of rectangle: %d", area);
    return 0;
}