#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n>1){
        int i;
        for(i=1;i<=n;i++){
            printf("%d ",i);
        }
        printf("\n");
        break;
    }
    if(n==1){
        printf("%d",1);
    }
    return 0;
}