// Your code here...
#include <stdio.h>
#include <string.h>

// Define a structure for MovieTicket
typedef struct {
    char movieName[50];
    char ticketType[10];
    float price;
} MovieTicket;

int main() {
    int n;
    scanf("%d", &n);
    MovieTicket tickets[n];
    
    float standardRevenue = 0, premiumRevenue = 0, vipRevenue = 0;
    
    // Input details for each ticket
    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", tickets[i].movieName, tickets[i].ticketType, &tickets[i].price);
        
        if (tickets[i].ticketType=="Standard") {
            standardRevenue += tickets[i].price;
        } else if (tickets[i].ticketType== "Premium") {
            premiumRevenue += tickets[i].price;
        } else if (tickets[i].ticketType== "VIP"){
            vipRevenue += tickets[i].price;
        }
    }
    
    // Display the total revenue collected
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", standardRevenue, premiumRevenue, vipRevenue);
    
    return 0;
}
