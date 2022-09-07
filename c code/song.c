#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        // n is used to represent total time of jurney
        // x is used to represent exact time duration of all song a,b,c
        int n, x;
        scanf("%d%d", &n, &x);
        // how many times c song will repeat
        printf("%d\n", n / (x * 3));
    }
    return 0;
}