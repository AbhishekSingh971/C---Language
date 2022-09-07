#include <stdio.h>
void swap(int*a ,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{int x,y;
    printf("enter the value of x: ");
    scanf("%d",&x);
    printf("enter the value of y: ");
    scanf("%d",&y);
    printf("The value of a is %d & b is %d before swap\n",x,y);
    swap(&x,&y);
    printf("The value of a is %d & b is %d after swap\n",x,y);
     return 0;
}