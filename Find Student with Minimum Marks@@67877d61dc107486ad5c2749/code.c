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

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    // Find the student with the minimum marks
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks < students[min_index].marks) {
            min_index = i;
        }
    }

    // Print the student with the lowest marks
    printf("Student with Minimum Marks: Roll Number : %d,Name: %s, Marks: %.2f\n\n",students[min_index].roll_number,students[min_index].name, students[min_index].marks);
    return 0;
}
