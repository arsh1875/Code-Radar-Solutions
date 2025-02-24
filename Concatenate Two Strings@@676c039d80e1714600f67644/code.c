// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char ch[100];
    char ch2[100];
    char re[200];
    fgets(ch,(sizeof(ch)),stdin);
    fgets(ch2,(sizeof(ch2)),stdin);

    ch[strcspn(ch,"\n")]=0;
    ch2[strcspn(ch2,"\n")]=0;

    strcpy(result,ch);
    strcat(result,ch2);
    printf("%s",re);
    return 0;
}