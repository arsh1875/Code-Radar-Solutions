// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    ch[strcspn(ch,"\n")]=0;
    int x;
    x=strlen(ch);
    printf("%d",x);
    return 0;
}