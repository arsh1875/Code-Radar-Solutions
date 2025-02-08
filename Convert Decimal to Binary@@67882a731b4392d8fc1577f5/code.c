#include <stdio.h>

void decimal_to_binary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    
    int binary[32]; // Array to store binary digits
    int i = 0;
    
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    
    decimal_to_binary(num);
    
    return 0;
}
