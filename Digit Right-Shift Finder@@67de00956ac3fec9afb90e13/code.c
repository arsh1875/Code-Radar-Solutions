#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int digitRightShift(int N) {
    char str[20];
    sprintf(str, "%d", N);

    int len = strlen(str);

    // If there's only one digit, return the number itself
    if (len == 1) return N;

    // Save the last character
    char last = str[len - 1];

    // Shift all digits to the right by one
    for (int i = len - 1; i > 0; i--) {
        str[i] = str[i - 1];
    }

    // Place last digit at the front
    str[0] = last;

    // Convert the shifted string back to integer
    int shifted = atoi(str);

    return shifted;
}
