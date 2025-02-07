#include <stdio.h>

int main() {
    int age, citizen;

    // Input age and citizenship status
    scanf("%d %d", &age, &citizen);

    // Check voting eligibility
    if (age >= 18 && citizen == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}
