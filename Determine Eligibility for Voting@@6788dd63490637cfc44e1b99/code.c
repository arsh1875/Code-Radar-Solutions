#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(18<=a){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}