#include <stdio.h>

int main() {
    char age;

    // Input age and citizenship status
    scanf("%c", &age);

    // Check voting eligibility
    if (age=='R' ) {
        printf("Stop\n");
    }
    else if (age=='G' ) {
        printf("Slow Down\n");
    }
    else if (age=='Y' ) {
        printf("Invalid input\n");
    }
    else if (age=='D') {
        printf("Below Average\n");
    }
    else if (age=='F' ) {
        printf("Fail\n");
    }
    else if (age==6 ) {
        printf("Saturday\n");
    }

    else{
        printf("Invalid grade");
    }
    return 0;

}