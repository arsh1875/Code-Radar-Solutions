// Your code here...
#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

// Function to swap two students
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort students by marks in descending order
void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    // Input the number of students
    scanf("%d", &n);
    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    // Sort students by marks in descending order
    sortStudents(students, n);

    // Print the sorted list of students
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, MArks: %.2f\n", students[i].roll_number, students[i].name, students[i].marks);
    }

    return 0;
}
