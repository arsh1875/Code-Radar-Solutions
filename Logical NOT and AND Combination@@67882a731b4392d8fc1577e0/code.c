#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2;
    printf("%d %d",&n1,&n2);
    if(n1&&n2<0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}