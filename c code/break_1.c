#include <stdio.h>

int main()
{
     int num;
     do
     {
          printf("enter the number:");
          scanf("%d", &num);
          printf("%d\n ",num);
     } while (num != -1);

     return 0;
}