#include <stdio.h>

int count_trailing_zeros(int num) {
    if (num == 0) return 32; // Assuming 32-bit integer
    int count = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int trailing_zeros = count_trailing_zeros(num);
    printf("%d\n", trailing_zeros);
    
    return 0;
}
