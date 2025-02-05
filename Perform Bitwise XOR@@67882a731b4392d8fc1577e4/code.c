#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Check if two numbers have opposite signs using logical and relational operators
    int r=a^b;
    printf("%d\n",r);
    return 0;
}
