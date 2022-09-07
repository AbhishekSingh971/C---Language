#include<stdio.h>
int main()
{
  int N, row, col, val, L=1, U=1;
  scanf("%d", &N);
  for ( row=0; row<3; row++)
  {
    for ( col=0; col<3; col++)
    {
      scanf("%d", &val);
      if(col<row && val!=0)
      {
        U=0;
      }
      if (col>row && val!=0)
      {
        L=0;
      }
    }
  }
  if ((U==1) && (L==1))
    printf("2");
   else if (U==1)
    printf("1");
  else if (L==1)
    printf("0#0");
   else
    printf("0#1");
    return 0;
}