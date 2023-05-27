#include <stdio.h>

void normal_array()
{
    int azim [5] = {1,2,3,4,5};

    printf("%d\n",azim[3]);
}
int main()
{
    int azim [2][5] = {{1,2}, {3,4,5,6,7}};

    printf("%d\n",azim[1][3]);
    //normal_array();

    return 0;
}