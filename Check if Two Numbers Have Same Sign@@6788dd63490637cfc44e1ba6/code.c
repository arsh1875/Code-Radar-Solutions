#include <stdio.h>

int main() {
    int age, citizen;

    // Input age and citizenship status
    scanf("%d %d", &age, &citizen);

    // Check voting eligibility
    if (age >= 0 && citizen >=0) {
        printf("Same Sign\n");
    }
    else if (age <= 0 && citizen <=0) {
        printf("Same Sign\n");
    }
    else{
        printf("Different Sign");
    }
    return 0;

}