#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);

    int i,j;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}