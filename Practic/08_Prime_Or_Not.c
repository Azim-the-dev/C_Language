// Write a function to find whether a given no. is prime or not.
// Use the same to generate the prime numbers less than 100.

#include <stdio.h>

void prime(int num);
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    prime(num);

    return 0;
}
void prime(int num)
{
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("'%d' is prime",num);
    }
    else
    {
        printf("'%d' is not prime",num);
    }
    //Not complected!
}

// What is prime number?
// Prime number is a number that is only divisible by 1 and itself.