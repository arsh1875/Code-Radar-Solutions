#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
        while(n>0){
            int i;
            for(i=1;i<=n;i++){
                printf("%d ",i);
            }
            printf("\n");
            break;
        }        
    return 0;
}