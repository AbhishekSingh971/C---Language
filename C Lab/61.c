#include <stdio.h>

void main()
{
    printf("Abhishek kumar singh\n");

    int a = 10;
    int *p;
    int **pp;
    p = &a;
    pp = &p;

    printf("address of a: %x\n", p);
    printf("address of p: %x\n", pp);
    printf("value stored at p: %d\n", *p);
    printf("value stored at pp: %d\n", **pp);
}


