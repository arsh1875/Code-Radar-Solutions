#include <stdio.h>
#include <math.h>  // For sqrt() function

int main() {
    int num1, num2;

    // Input two numbers
    scanf("%d %d", &num1, &num2);

    // Check if num2 is the square root of num1
    if (num1<18 || num2==1) {
        printf("Eligible");
    } 
    else if (num1==17) {
        if(num2==1){
        printf("Not Eligible");
        }
    } 
    else if (num1==16) {
        if(num2==0){
        printf("Not Eligible");
        }
    } 
    else {
        printf("Not Eligible");
    }

    return 0;
}
