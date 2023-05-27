#include<stdio.h>

int main()
{
    int n1,s1,sum;
    n1=1;
    sum=0;

    printf("Enter a num: ");
    

    do 
    {
        sum+=n1;
        n1++;
    }while(n1<=s1);

    printf("the sum = %d",sum);

    return 0;
}