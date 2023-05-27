#include <stdio.h>

void arr(int az[], int num);
int main()
{
    int a[] = {2,22,222,2222,22222};
    arr(a, 5);
    printf("%d\n",a[4]);
    return 0;
}
void arr(int az[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d\n",az[i]);
        az[4] = 99999;
    }
    
}