#include <stdio.h>

int main() {
    int n=0;
    scanf("%d",&n);
        while(n){
            int i,sum=0;
            for(i=1;i<=n;i++){
                sum+=i;
            }
            printf("%d",sum);
            break;
        }        
    return 0;
}