#include <stdio.h>

int main()
{
  // 1
  int i, j, row, space;

  // 2
  printf("Enter total number of rows : \n");
  scanf("%d", &row);

  // 3
  space = row - 1;

  // 4
  for (i = 1; i <= row; i++)
  {
    for (j = 1; j <= space; j++)
      printf(" ");

    space--;

    for (j = 1; j <= 2 * i - 1; j++)
      printf("*");

    printf("\n");
  }

  // 5
  space = 1;

  // 6
  for (i = 1; i <= row - 1; i++)
  {
    for (j = 1; j <= space; j++)
      printf(" ");

    space++;

    for (j = 1; j <= 2 * (row - i) - 1; j++)
      printf("*");

    printf("\n");
  }

  return 0;
}