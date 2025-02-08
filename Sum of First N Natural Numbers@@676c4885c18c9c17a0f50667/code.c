#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
        while(n>0){
            int i,sum=0;
            for(i=1;i<=n;i++){
                printf("%d ",i);
                sum+=i;
            }
            printf("%d",sum);
            break;
        }        
    return 0;
}