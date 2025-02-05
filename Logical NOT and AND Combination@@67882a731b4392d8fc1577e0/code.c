#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1&&n2>=0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}