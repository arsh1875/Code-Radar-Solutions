#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1,n2;
    char s;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%c",&s);

    if(s="+"){
        printf("%d",n1+n2);
    }
    if(s="-"){
        printf("%d",n1-n2);
    }
    if(s="*"){
        printf("%d",n1*n2);
    }
    if(s="/"){
        printf("%d",n1/n2);
    }
    return 0;
}