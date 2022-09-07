#include <stdio.h>

int main()
{
    int m[10][20];

    // printf("Enter number of rows : ");
    // scanf("%d", &m);
    // printf("Enter number of columns : ");
    // scanf("%d", &n);

    /* Input data in matrix */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    if(m[0][0]==0 || m[0][1]==0 || m[0][2]==0 || m[1][0]==0 || m[1][1]==0 || m[1][2]==0 || m[2][0]==0 || m[2][1]==0 || m[2][2]==0){
         printf("0#0");
    }

    else if(m[1][0]%m[0][0] == 0 && m[1][1]%m[0][1] == 0 && m[1][2]%m[0][2] == 0 ){
        printf("0#1");
    }
    else if(m[2][0]%m[0][0] == 0 && m[2][1]%m[0][1] == 0 && m[2][2]%m[0][2] == 0 ){
        printf("0#2");
    }
    else if(m[2][0]%m[1][0] == 0 && m[2][1]%m[1][1] == 0 && m[2][2]%m[1][2] == 0 ){
        printf("1#2");
    }
    
    
     return 0;
}