#include <stdio.h>

int flip_bits(int num) {
    return ~num; // Bitwise NOT operation
}

int main() {
    int num;
    scanf("%d", &num);
    
    int flipped = flip_bits(num);
    printf("%d\n", flipped);
    
    return 0;
}
