#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    else{
        while(n>0){
            int i,sum=0;
            for(i=1;i<=n;i++){
                sum+=i;
            }
            printf("%d",sum);
            break;
        }       
    }     
    return 0;
}