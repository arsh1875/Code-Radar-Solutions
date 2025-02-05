#include <stdio.h>
#include <limits.h>  // For INT_MAX and INT_MIN

// Function to check MSB using a for loop
void checkMSB(int num) {
    int bits = sizeof(num) * 8;  // Get the number of bits in the integer (typically 32 bits)
    
    // Iterate from the highest bit to the lowest bit
    for (int i = bits - 1; i >= 0; i--) {
        if (num & (1 << i)) {  // Check if the bit at position 'i' is set
            printf("Set", i);
            return;  // Exit the function as we've found the MSB
        }
    }
    
    // If no bits are set (i.e., the number is 0)
    printf("Not Set");
}

int main() {
    int num;

    // Input number from the user
    scanf("%d", &num);

    // Check MSB
    checkMSB(num);

    return 0;
}
