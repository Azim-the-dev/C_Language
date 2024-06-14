#include <stdio.h>

int main()
{
    int a = 10;
    int *pointer = &a; //'*pointer' is a pointer variable, '&a' is adress of a
    //That means  pointer variable have the adress of a
    
    printf("The value of a is: %d\n",a);
    printf("The value of a is: %d\n",*pointer);
    // this is value of a

    printf("The adress of a is: %u\n",&a);
    printf("The adress of a is: %u\n",pointer);
    // this is adress of a

    printf("The adress of pointer is: %u\n",&pointer);
    // This is adress of pointer
    printf("The value of pointer is: %u\n",*(&pointer));
    // this is adress of a using pointer

    return 0;
}
// '&' This is called adress of operator
// '*' This is called value at adress operator

// '%p' Is for Hexadecimal format
// '%u' Is for Numaric format