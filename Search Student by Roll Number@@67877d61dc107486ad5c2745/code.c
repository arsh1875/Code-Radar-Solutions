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
        
    }
    int rn;
    scanf("%d",&rn);
    for (int i = 0; i < n; i++){
        if(rn==students[i].roll_number){
            printf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        }
        else{
           printf("Student not found");
        }
    }
    return 0;
}
