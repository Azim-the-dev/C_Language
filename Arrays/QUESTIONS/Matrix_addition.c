#include <stdio.h>

int main()
{
    int matrix[3][3], matrix2[3][3], matrixadd[3][3];

    printf("ENTER NUMBER FOR FIRST MATRIX\n");
    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < 3; z++)
        {
            scanf("%d", &matrix[i][z]);
        }
    }

    printf("ENTER NUMBER FOR SECOND MATRIX\n");
    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < 3; z++)
        {
            scanf("%d", &matrix2[i][z]);
        }
    }

    printf("HERE IS YOUR FIRST MATRIX\n");
    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < 3; z++)
        {
            printf("%d\t", matrix[i][z]);
        }
        printf("\n");
    }

    printf("HERE IS YOUR SECOND MATRIX\n");
    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < 3; z++)
        {
            printf("%d\t", matrix2[i][z]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < 3; z++)
        {
            matrixadd[i][z] = matrix[i][z] + matrix2[i][z];
        }
    }

    printf("HERE IS YOUR ADDITION OF MATRIX\n");
    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < 3; z++)
        {
            printf("%d\t", matrixadd[i][z]);
        }
        printf("\n");
    }

    return 0;
}