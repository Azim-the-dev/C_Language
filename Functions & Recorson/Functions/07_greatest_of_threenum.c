#include <stdio.h>

int avrage(int a, int b, int c);
int main()
{
    int num, num1, num2;

    printf("Enter 3 number for greatest: ");
    scanf("%d",&num);
    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("The greatest is %d\n", avrage(num,num1,num2));

    printf("Done\n");

    return 0;
}

int avrage(int a, int b, int c)
{
    if (a>b && a>c)
    {
        return a;
        //printf("The avrage of three number is %d\n",a);
    }
    else if (b>a && b>c)
    {
        return b;
        //printf("The avrage of three number is %d\n",b);
    }
    else
    {
        return c;
        //printf("The avrage of three number is %d\n",c);
    }
    

}