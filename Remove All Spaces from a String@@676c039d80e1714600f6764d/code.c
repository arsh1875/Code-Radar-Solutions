// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    int j=0;
    char str[100],result[100];
    fgets(str,sizeof(str),stdin);

    for(int i=0;i!='\0';i++){
        if(str[i]!=' '){
            result[j++]=str[i];
        }
    }
    result[j]='\0';
    printf("%s\n",result);
}