#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,num2,num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    float avg;
    avg=(num1+num2+num3)/3;
    printf("Average: %.2f/n",avg);
    return 0;
}