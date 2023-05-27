#include <stdio.h>

int main()
{
    int arr1[5],arr2[5],arr_sum[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr1[i]);
        scanf("%d",&arr2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        arr_sum[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d",arr_sum[i]);
    }
    
    return 0;
}