// Your code here...
#include <stdio.h>
#include <string.h>

// Define a structure for Vehicle
typedef struct {
    char number[20];
    char type[10];
    float toll;
} Vehicle;

int main() {
    int n;
    scanf("%d", &n);
    Vehicle vehicles[n];
    
    float carToll = 0, truckToll = 0, bikeToll = 0;
    
    // Input details for each vehicle
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", vehicles[i].number, vehicles[i].type, &vehicles[i].toll);
        
        if (strcmp(vehicles[i].type, "Car") == 0) {
            carToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Truck") == 0) {
            truckToll += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Bike") == 0) {
            bikeToll += vehicles[i].toll;
        }
    }
    
    // Display the total toll collected
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carToll, truckToll, bikeToll);
    
    return 0;
}
