#include <stdio.h>

void arr(int *a, int num);
int main()
{
    int a[] = {2,22,222,2222,22222};
    arr(&a[0], 5);
    //printf("%d\n",a[4]);
    return 0;
}
void arr(int *a, int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d\n",*a);
        a++;
        //a[4] = 99999;
    }
    
}