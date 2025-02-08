#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("1\n");
    }
    else{
        while(n>1){
            int i;
            for(i=1;i<=n;i++){
                printf("%d ",i);
            }
            printf("\n");
            break;
        }        
    }
    return 0;
}