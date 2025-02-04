#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>0){
        printf("True");
    }
    if(b<0){
        printf("True");
    }
    else if(a&&b=0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}