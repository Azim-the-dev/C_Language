#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 1) {
        Beep(261.63, 500); // C4 note
    } else if (num == 2) {
        Beep(293.66, 500); // D4 note
    } else if (num == 3) {
        Beep(329.63, 500); // E4 note
    } else if (num == 4) {
        Beep(349.23, 500); // F4 note
    } else if (num == 5) {
        Beep(392.00, 500); // G4 note
    } else {
        printf("Invalid number entered.\n");
    }
    return 0;
}
