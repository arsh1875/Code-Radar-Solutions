// Your code here...
#include <stdio.h>

// Define the structure for Student
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int N;
    
    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &N);
    
    struct Student students[N];
    
    // Input student details
    for (int i = 0; i < N; i++) {
        printf("Enter roll number, name, and marks for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    
    // Display student details
    printf("\nStudent Records:\n");
    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
    
    return 0;
}