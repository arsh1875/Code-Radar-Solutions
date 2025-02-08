#include <stdio.h>

int clear_nth_bit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    
    int result = clear_nth_bit(num, n);
    printf("%d\n",result);
    
    return 0;
}
