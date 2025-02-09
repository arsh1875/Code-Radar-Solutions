#include <stdio.h>
#include <string.h>

int main() {
    char n[100];
    fgets(n,sizeof(n),stdin);
    int count=0;
    for(int i=0;i<strlen(n);i++){
        if(n[i]=="a" || n[i]=="e"|| n[i]=="i" || n[i]=="o" || n[i]=="u" || n[i]=="A" || n[i]=="E" || n[i]=="I" || n[i]=="O" || n[i]=="U"){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}