#include <stdio.h>

int main()
{
    char ch;
printf("enter the ch :");
scanf("%c",&ch);
if(65<=ch<=90)
{
printf("Uppercase\n");
printf("the ascii value of %c is : %d",ch,ch);
}
else if(97<=ch<=122)
{
printf("Lowercase\n");
printf("the ascii value of %c is : %d",ch,ch);
}
     return 0;
}