#include <stdio.h>

int main()
{
    int num, r, sum =0;

    printf("Enter a number: ");
    scanf("%d",&num);

    while (num >0)
    {
        r = num % 10; // r = 12.3
        sum = sum + r; // sum = 12.3
        num = num /10; // num = 
    }
    printf("sum %d",sum);
    
    return 0;
}

// 123 = 1+2+3 =6;