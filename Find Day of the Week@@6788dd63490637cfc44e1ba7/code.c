#include <stdio.h>

int main() {
    int age;

    // Input age and citizenship status
    scanf("%d", &age);

    // Check voting eligibility
    if (age==1 ) {
        printf("Monday\n");
    }
    else if (age==2 ) {
        printf("Tuesday\n");
    }
    else if (age==3 ) {
        printf("Wednesday\n");
    }
    else if (age==4 ) {
        printf("Thrusday\n");
    }
    else if (age==5 ) {
        printf("Friday\n");
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