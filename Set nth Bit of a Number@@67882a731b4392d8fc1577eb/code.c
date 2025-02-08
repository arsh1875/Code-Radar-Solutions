#include <stdio.h>

int set_nth_bit(int num, int n) {
    return num | (1 << n); // Using bitwise OR to set the nth bit
}

int main() {
    int num, n;
    
    // Input number and bit position
    scanf("%d", &num);
    scanf("%d", &n);
    
    // Set the nth bit
    int result = set_nth_bit(num, n);
    
    // Output the result
    printf("%d\n", n, result);
    
    return 0;
}
