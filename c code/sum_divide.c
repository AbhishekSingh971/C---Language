#include <stdio.h>

int main()
{ 
    int size,sum=0;
    scanf("%d",&size);
    int arr[size+1];
    for (int i = 1; i <= size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 1; i <= size; i++)
    {
        sum+=arr[i];
    }  
    printf("%d\n",sum);
 
    if (size%2 != 0)
    { 
        int i=(size+1)/2;                                                                 
        int odd=arr[i];
        printf("%d",sum-odd);
    }
    else{
        int i = size/2;
        int j = i+1;
        float result = (arr[i]+arr[j])/2;
        printf("%d\n",arr[i]);
        printf("%d\n",arr[j]);
        printf("%f\n",result);
        printf("%f",sum-result);
    }
    

     return 0;
}