// Your code here...
// Your code here...
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

    int found = 0;

    // Search for the student by roll number
    for (int i = 0; i < n; i++) {
        if ( 50>  students[i].marks) {
            found+=1;
          // Stop searching after finding the student
        }
    }
    // If student is not found, print a message
    if(found==0){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }
    return 0;
}
