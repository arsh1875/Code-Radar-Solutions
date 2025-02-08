#include <stdio.h>

int count_leading_zeros(int num) {
    if (num == 0) return 32; // Assuming 32-bit integer
    int count = 0;
    while ((num & (1 << 31)) == 0) {
        num <<= 1;
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int leading_zeros = count_leading_zeros(num);
    printf("%d\n", leading_zeros);
    
    return 0;
}
