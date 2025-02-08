#include <stdio.h>

int toggle_nth_bit(int num, int n) {
    return num ^ (1 << n);
}

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    
    int result = toggle_nth_bit(num, n);
    printf("%d\n",result);
    
    return 0;
}
