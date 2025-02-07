#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d;
    scanf("%d",&d);

    for(int i=2;(d-1);i++){
        if(d%i==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    
    return 0;
}