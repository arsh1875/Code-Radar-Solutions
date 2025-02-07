#include <stdio.h>

int main() {
    char age;

    // Input age and citizenship status
    scanf("%c", &age);

    // Check voting eligibility
    if (age=='A' ) {
        printf("Excellent\n");
    }
    else if (age=='b' ) {
        printf("Good\n");
    }
    else if (age=='C' ) {
        printf("Average\n");
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
    else if (age==7 ) {
        printf("Sunday\n");
    }
    else{
        printf("Invalid");
    }
    return 0;

}