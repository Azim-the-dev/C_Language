#include <stdio.h>

int main()
{
    int azim[2][2] = {{1,2}, {3,4}};

    for (int i = 0; i < 2; i++)
    {
        for (int z = 0; z < 2; z++)
        {
            //printf("%d %d\n",i,z);
            printf("%d",azim[1][z]);
        }
    }
    

    return 0;
}