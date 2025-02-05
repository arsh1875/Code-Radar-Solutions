#include <stdio.h>

int main() {
    int n;
    scanf("%d\n",&n);
    if(n%10==1){
        printf("Set");
    }
    else if(n%10==5){
        printf("Set");
    }
    else if(n%10==7){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}