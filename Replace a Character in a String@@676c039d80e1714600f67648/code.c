// Your code here...
#include <stdio.h>
void replace(char *str,char oldl,char newl){
    for(int i=0;i!='\0';i++){
        if(str[i]==oldl){
            str[i]==newl;
        }
    }
}
int main() {
    char str[100], newl, oldl;
    fgets(str, sizeof(str), stdin);
    scanf("%s\n",&oldl);
    scanf("%s\n",&newl);
    replace(str,oldl,newl);
    printf("%s\n",str);
    return 0;
}
