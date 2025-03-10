#include <stdio.h>
#include <string.h>

int main() {
    struct student {
        int rollno;
        char name[50];
        float Marks;
    };
    
    struct student stud[1000];
    int n, topScorerIndex = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {

        scanf("%d", &stud[i].rollno);
        
        scanf("%s", stud[i].name);
        
        scanf("%f", &stud[i].Marks);
    }
    
    for (int i = 1; i < n; i++) {
        if (stud[i].Marks > stud[topScorerIndex].Marks) {
            topScorerIndex = i;
        }
    }
    
   
    
    printf("Top Scorer: ");
    printf("Roll Number: %d, ", stud[topScorerIndex].rollno);
    printf("Name: %s, ", stud[topScorerIndex].name);
    printf("Marks: %.2f\n", stud[topScorerIndex].Marks);
    
    return 0;
}