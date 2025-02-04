#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num1,num2,num3;
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);
    float avg;
    avg=(num1+num2+num3)/3;
 
    printf("Average: %.2f",avg);
    return 0;
}