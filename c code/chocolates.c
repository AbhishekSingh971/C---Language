#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        //c is used for willing to gift c no. of chocolate
        //x is used for no. of chocolate he have currently
        //y is used for price of 1 chocolate
        int c,x,y;
        scanf("%d%d%d",&c,&x,&y);

        if (x<=c)
        {
            //how much money he have to spent to gift c no. of chocolate 
            printf("%d",(c-x)*y);
        }  
    }
    
     return 0;
}