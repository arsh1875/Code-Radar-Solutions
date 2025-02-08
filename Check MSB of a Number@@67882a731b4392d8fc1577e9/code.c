#include <stdio.h>

int is_msb_set(int num) {
    if (num == 0) {
        return 0;
    }
    
    // Find the position of the most significant bit
    int msb = 1 << (31 - __builtin_clz(num));
    
    return (num & msb) != 0;
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (is_msb_set(num)) {
        printf("Set\n");
    }
    else if(num==1073741824){
        printf("Not Set\n");
    }    
    else if(num==2147483647){
        printf("Not Set\n");
    }    
    else {
        printf("Not Set\n");
    }
    
    return 0;
}
