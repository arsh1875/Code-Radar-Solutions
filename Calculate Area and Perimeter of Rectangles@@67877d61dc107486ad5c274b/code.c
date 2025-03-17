#include <stdio.h>

// Define a structure for Rectangle
typedef struct {
    float length;
    float breadth;
} Rectangle;

// Function to calculate area
float calculateArea(Rectangle r) {
    return r.length * r.breadth;
}

// Function to calculate perimeter
float calculatePerimeter(Rectangle r) {
    return 2 * (r.length + r.breadth);
}

int main() {
    int n;
    scanf("%d", &n);
    
    Rectangle rectangles[n];
    
    // Input length and breadth for each rectangle
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &rectangles[i].length, &rectangles[i].breadth);
    }
    
    // Calculate and display area and perimeter
    for (int i = 0; i < n; i++) {
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1, calculateArea(rectangles[i]), calculatePerimeter(rectangles[i]));
    }
    
    return 0;
}
