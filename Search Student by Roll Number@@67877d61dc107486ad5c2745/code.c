#include <stdio.h>
struct student{
    int roll;
    char name[100];
    float mark;
};

int main(){
    int n;
    scanf("%d",&n);
    struct student stud[n];
    for(int i=0;i<n;i++){
        scanf("%d",&stud[i].roll);
        scanf("%s",stud[i].name);
        scanf("%f",&stud[i].mark);
    }
    int en;
    scanf("%d",&en);
    for(int i=0;i<n;i++){
        if(stud[i].roll==en){
        printf("Roll Number: %d, ",&stud[i].roll);
        printf("Name: %s, ",stud[i].name);
        printf("Marks: %.2f",&stud[i].mark);
        }
        else{
            printf("Student not found");
        }
    }
}