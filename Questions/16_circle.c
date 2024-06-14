// Write a program which takes the radius of a circle as input from the user,
// passes it to another function that computes the area and the circumference of the circle and displays the value of area and circumference from the main( ) function.

#include <stdio.h>
#define PI 3.14159

void azim(float radius, float *area, float *cir);
int main()
{
    float radius, area, cir;

    printf("Enter thr radius of the circle: ");
    scanf("%f", &radius);

    azim(radius, &area, &cir);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", cir);

    return 0;
}
void azim(float radius, float *area, float *cir)
{
    *area = PI * radius * radius;
    *cir = 2 * PI * radius;
}