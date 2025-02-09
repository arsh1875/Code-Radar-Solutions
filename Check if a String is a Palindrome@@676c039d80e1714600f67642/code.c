#include <stdio.h>
#include <string.h>

int main() {
    char n[100],rev[100];
    scanf("%s",&n);
    int len=strlen(n);

    for(int i=0;i<len;i++){
        rev[i]=n[len-i-1];
    }
    rev[len]='\0';
    if(strcmp(n,rev)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}