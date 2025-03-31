#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    while(n>0){
        int sum;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        printf("%d",sum);
        break;
    }
    return 0;
}