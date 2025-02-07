#include <stdio.h>

int main() {
    int age, citizen;

    // Input age and citizenship status
    printf("Enter age and citizenship status (1 for citizen, 8 for non-citizen): ");
    scanf("%d %d", &age, &citizen);

    // Check voting eligibility
    if (age >= 0 && citizen >=0) {
        printf("Same Sign\n");
    }
    if (age <= 0 && citizen <=0) {
        printf("Same Sign\n");
    }
    return 0;

}