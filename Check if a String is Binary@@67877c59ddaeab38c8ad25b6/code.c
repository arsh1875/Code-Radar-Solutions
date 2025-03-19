// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input the string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    if(str[i]=0;str[i]!='/0';str[i]){
        if(str[i]==0 && str[i]==1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }

    return 0;
}
