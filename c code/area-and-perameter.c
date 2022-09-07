#include <stdio.h>

int main()
{
    int r;
    float pie = 3.14, area, perameter;
    printf("enter the radis of circle:");
    scanf("%d", &r);

    area = pie * r * r;
    printf("the area of circle is  %fm/sq\n", area);

    perameter = 2 * pie * r;
    printf("the perameter of circle is  %fm/sq", perameter);

    return 0;
}