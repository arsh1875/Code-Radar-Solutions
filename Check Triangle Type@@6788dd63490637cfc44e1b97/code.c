#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input three sides of the triangle
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the given sides can form a triangle (Triangle Inequality Theorem)
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
        
        // Check for Equilateral triangle (all sides are equal)
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral.\n");
        }
        // Check for Isosceles triangle (any two sides are equal)
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("Isosceles.\n");
        }
        // If no sides are equal, it's a Scalene triangle
        else {
            printf("Scalene.\n");
        }

    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
