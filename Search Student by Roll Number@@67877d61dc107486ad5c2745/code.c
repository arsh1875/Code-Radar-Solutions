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

    int rn, found = 0;
    scanf("%d", &rn);

    // Search for the student by roll number
    for (int i = 0; i < n; i++) {
        if (rn == students[i].roll_number) {
            printf("%d %s %.2f\n", students[i].roll_number, students[i].name, students[i].marks);
            found = 1;
            break;  // Stop searching after finding the student
        }
    }

    // If student is not found, print a message
    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}
