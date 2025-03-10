// Your code here...
// Your code here...
#include <stdio.h>

struct Student {
    int rollNumber;
    char topscorer[50];
    char name[50];
    float marks;
};

int main() {
    int N;
    
    scanf("%d", &N);
    
    struct Student students[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }
    if(int i==0||students[i].marks>topscorer.marks){
        topscorer=students[i];
    }
    
    printf("Top Scorer:");
    return 0;
}