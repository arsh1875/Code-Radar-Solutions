// Your code here...
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int N;
    
    scanf("%d", &N);
    
    struct Student students;
    
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students.rollNumber, students.name, &students.marks);
    }
    
    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students.rollNumber, students.name, students.marks);
    }
    
    return 0;
}