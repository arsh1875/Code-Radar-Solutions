#include <stdio.h>

int get_lowest_set_bit_position(int num) {
    if (num == 0) return -1; // Return -1 if no bit is set
    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }
    return position;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int position = get_lowest_set_bit_position(num);
    if (position == -1) {
        printf("No set bit found.\n");
    } else {
        printf("%d\n", position);
    }
    
    return 0;
}
