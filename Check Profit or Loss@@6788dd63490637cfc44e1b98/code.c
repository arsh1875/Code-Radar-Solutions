#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int cp,sp;
    scanf("%d",&cp);
    scanf("%d",&sp);
    int result=(sp-cp);
    if(result>0){
        printf("Profit");
    }
    else if(result==0){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}