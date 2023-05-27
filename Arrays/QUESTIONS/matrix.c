#include <stdio.h>

int main()
{
    int matrix1[10][10], matrix2[10][10], matrix3[10][10], row, column;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &column);
    printf("ENTER NUMBER FOR FIRST MATRIX\n");
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < column; z++)
        {
            scanf("%d", &matrix1[i][z]);
        }
    }

    printf("ENTER NUMBER FOR SECOND MATRIX\n");
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < column; z++)
        {
            scanf("%d", &matrix2[i][z]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < column; z++)
        {
            matrix3[i][z] = 0;
            for (int x = 0; x < column; x++)
            {
                matrix3[i][z] += matrix1[i][x] * matrix2[x][z];
            }
        }
    }

        printf("THE THIRD MATRIX\n");
    for (int i = 0; i < row; i++)
    {
        for (int z = 0; z < column; z++)
        {
            printf("%d\t", matrix3[i][z]);
        }
        printf("\n");
    }

    return 0;
}