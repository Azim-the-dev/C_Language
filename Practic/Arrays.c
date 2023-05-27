//Enter 10 students mark and print it
#include <stdio.h>

int main()
{
    int mark[10];
    int num = 1;

    for (int i = 0; i < 10; i++)
    {
        printf("%d Student Number: ",num);
        scanf("%d",&mark[i]);
        num++;
    }
    printf("--------------------\n");
    for (int z = 0; z < 10; z++)
    {
        printf("%d Student Number: %d\n",z+1, mark[z]);// Ya aa sa bhi ho sak ta hai 
        // Aar yaha 'i + 1' manes (i mai 1 add hoga fir print hoga) naki i ka increment hoga
    }

    return 0;
}