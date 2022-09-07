#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int n,s;
        scanf("%d%d",&n,&s);
         
         if (n>=s)
         {
            printf("%d\n",s);
         }
        else
         {
            printf("%d\n",n*2-s);
         }
         
    }
    
     return 0;
}