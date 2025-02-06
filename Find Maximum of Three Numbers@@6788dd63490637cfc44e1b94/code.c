#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a>=b&c){
        printf("%d",a);
    }
    else if(b>=a&c){
        printf("%d",b);
    }
    else if(c>=a&b){
        printf("%d",c);
    }
    return 0;
}