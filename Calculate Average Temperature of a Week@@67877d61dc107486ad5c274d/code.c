// Your code here...
#include <stdio.h>
#include <string.h>

// Define a structure for Day
typedef struct {
    char name[20];
    float temperature;
} Day;

int main() {
    Day week[7];
    float sum = 0.0;
    
    // Input details for each day
    for (int i = 0; i < 7; i++) {
        scanf("%s %f", week[i].name, &week[i].temperature);
        sum += week[i].temperature;
    }
    
    // Calculate average temperature
    float average = sum / 7;
    
    // Display the average temperature
    printf("Average Temperature: %.2f\n", average);
    
    return 0;
}
