#include <stdio.h>

int main()
{
    int mark[4];
    int *ptr;
    ptr = &mark[0];
    //ptr = mark;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the number of %dth student: ",i+1);
        scanf("%d", ptr);
        ptr ++;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %dth student is %d\n",i+1,mark[i]);
    }    

    return 0;
}
//imp