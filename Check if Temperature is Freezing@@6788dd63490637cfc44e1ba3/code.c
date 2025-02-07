#include <stdio.h>

int main() {
    int age;

    // Input age and citizenship status
    scanf("%d", &age);

    // Check voting eligibility
    if (age > 0 ) {
        printf("Above Freezing\n");
    }
    else{
        printf("Freezing");
    }
    return 0;

}