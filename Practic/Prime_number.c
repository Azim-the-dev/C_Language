#include <stdio.h>

int main()
{
    int num, count =0;

    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        if (num % i == 0)
        {
            count ++;
        }
    }
    if (count == 2)
    {
        printf("%d is prime!",num);
    }
    else 
    {
        printf("Nope");
    }
    



    return 0;
}
// prime number ony devided with him and 2;