// Your code here...
#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n;
    float total_marks = 0.0;

    // Input the number of students
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        total_marks += students[i].marks;
    }

    // Calculate and print the average marks rounded to two decimal places
    printf("Total Marks: %.2f\n", total_marks);
    printf("Average Marks: %.2f\n", total_marks / n);

    return 0;
}
