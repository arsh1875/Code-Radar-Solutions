#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Input the number of students
    scanf("%d", &n);

    struct Student students[n];
    float total_marks = 0.0;  // Initialize total_marks as float

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        total_marks += students[i].marks;
    }

    // Calculate and print the total and average marks rounded to two decimal places
    printf("Total Marks: %.2f\n", total_marks);
    printf("Average Marks: %.2f\n", total_marks / n);

    return 0;
}
