











#include <stdio.h>
struct student{
    int roll;
    char name[100];
    float mark;
};

int main(){
    int n;
    float total=0.0;
    scanf("%d",&n);
    struct student stud[n];
    for(int i=0;i<n;i++){
        scanf("%d",&stud[i].roll);
        scanf("%s",&stud[i].name);
        scanf("%f",&stud[i].mark);
        total+=stud[i].mark;
    }
    printf("Average Marks: %.2f\n",total/n);
}