#include <stdio.h>

void avg_sum(int num1, int num2, int *sum, float *avg);
int main()
{
    int num1, num2, sum;
    float avg;

    printf("Enter Two Numbers:\n");
    scanf(" %d %d", &num1, &num2);

    avg_sum(num1, num2, &sum, &avg);

    printf("The sum of two number is %d\nThe avrage of two number is %f",sum,avg);

    return 0;
}
void avg_sum(int num1, int num2, int *sum, float *avg)
{
    *sum = num1 + num2;
    *avg = (*sum)/2;
    //*avg = (float)(*sum)/2;
}