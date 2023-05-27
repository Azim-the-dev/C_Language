#include <stdio.h>

void adress(int *add);
void adress2(int i);
int main()
{
    int i = 10;
    printf("The adress of i is %u\n",&i);
    adress(&i);
    adress2(i);
    return 0;
}
void adre ss(int *add)
{
    printf("The adress of i is %u\n",add);//these adressare are same coz, adress are passing
}

void adress2(int i)
{
    printf("The adress of i is %u\n",&i);//these adress are not same coz, these variable(i) are different in memory
}