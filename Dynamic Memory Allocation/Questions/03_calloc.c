#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, *ptr;
    ptr = (int * )calloc(num, sizeof(int));

    printf("Enter size of array: ");
    scanf("%d", &num);

    for(int i = 0;i < num;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i = 0;i < num;i++)
    {
        printf("%d",ptr[i]);
    }

    free(ptr);
    return 0;
}