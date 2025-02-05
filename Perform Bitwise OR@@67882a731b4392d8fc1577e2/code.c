#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Check if two numbers have opposite signs using logical and relational operators
    if ((a^b)<0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
