// Your code here...
#include <stdio.h>
#include <string.h>

// Define a structure for Subscription
typedef struct {
    char userName[50];
    char subscriptionType[10];
    float cost;
} Subscription;

int main() {
    int n;
    scanf("%d", &n);
    Subscription users[n];
    
    int basicCount = 0, standardCount = 0, premiumCount = 0;
    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;
    
    // Input details for each subscription
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", users[i].userName, users[i].subscriptionType, &users[i].cost);
        
        if (strcmp(users[i].subscriptionType, "Basic") == 0) {
            basicCount++;
            basicRevenue += users[i].cost;
        } else if (strcmp(users[i].subscriptionType, "Standard") == 0) {
            standardCount++;
            standardRevenue += users[i].cost;
        } else if (strcmp(users[i].subscriptionType, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += users[i].cost;
        }
    }
    
    // Display the total revenue and user count
    printf("Basic: %d Users, Revenue: %.2f\n", basicCount, basicRevenue);
    printf("Standard: %d Users, Revenue: %.2f\n", standardCount, standardRevenue);
    printf("Premium: %d Users, Revenue: %.2f\n", premiumCount, premiumRevenue);
    
    return 0;
}
