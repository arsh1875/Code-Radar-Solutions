#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1,s2,s3;
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);

if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2)){
    if(s1==s2||s2==s3||s1==s3){
        printf("Isosceles\n");
    }
    else if(s1==s2 && s2==s3){
        printf("Equilateral\n");
    }
    else{
        printf("Scalene\n");
    }
    return 0;
}    
}