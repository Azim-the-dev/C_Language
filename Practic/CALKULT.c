#include<stdio.h>

int main(){
    float mark;
    float total = 600;

    printf("\nENTER YOUR RESULT");
    scanf(" %f",&mark);

    printf("YOU PERSENTEAGE IS: %f",mark*100/600);
    return 0;
}