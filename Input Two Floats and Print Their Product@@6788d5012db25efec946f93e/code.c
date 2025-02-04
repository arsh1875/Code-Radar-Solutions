#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float f1,f2;
    scanf("%f",&f1);
    scanf("%f",&f2);
    float r;
    r=f1*f2;
    printf("Product: %.2f\n",r);
    return 0;
}