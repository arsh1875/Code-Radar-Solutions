// Your code here...
#include <stdio.h>
#include <string.h>

// Define a structure for Employee
typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    int n;
    scanf("%d", &n);
    Employee employees[n];
    
    // Input details for each employee
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &employees[i].id, employees[i].name, &employees[i].salary);
    }
    
    // Display employee details along with calculated bonus
    for (int i = 0; i < n; i++) {
        float bonus = (employees[i].salary < 50000) ? employees[i].salary * 0.10 : employees[i].salary * 0.05;
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", employees[i].id, employees[i].name, bonus);
    }
    
    return 0;
}
