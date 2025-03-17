// Your code here...
#include <stdio.h>
#include <string.h>

// Define a structure for Student
typedef struct {
    int roll_number;
    char name[100];
    float marks;
} Student;

// Function to determine grade based on marks
char getGrade(float marks) {
    if (marks >= 85)
        return 'A';
    else if (marks >= 70)
        return 'B';
    else
        return 'C';
}

int main() {
    int n;
    scanf("%d", &n);
    
    Student students[n];
    
    // Input details for each student
    for (int i = 0; i < n; i++) {
        scanf("%d %99s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }
    
    // Display student details with their grades
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].roll_number, students[i].name, getGrade(students[i].marks));
    }
    
    return 0;
}
