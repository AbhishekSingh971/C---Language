#include <stdio.h>

int main()
{
    int i;
    printf("enter the value : ");
    scanf("%d", &i);
    while (i < 100)
    {{
            if (i == 8)
                break;
        }
        printf("--i=%d\n", --i);
        // printf("i--=%d\n",i--);
        
    }
    return 0;
}