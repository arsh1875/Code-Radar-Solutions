#include <stdio.h>

int get_lowest_set_bit(int num) {
    return num & -num;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int lowest_set_bit = get_lowest_set_bit(num);
    printf("%d\n", lowest_set_bit);
    
    return 0;
}
