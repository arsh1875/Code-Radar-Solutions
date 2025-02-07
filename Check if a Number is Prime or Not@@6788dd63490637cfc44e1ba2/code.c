#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d,p=1;
    scanf("%d",&d);

    if (d <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    for(int i=2;i*i<=d;i++){
        if(d%i==0){
            printf("Not Prime");
            p=0;
            break;
        }
    }
    if(p){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}