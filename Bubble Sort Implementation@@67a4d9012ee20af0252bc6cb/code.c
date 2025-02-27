#include<stdio.h>

int main(){
    int a[100];
    int n;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            int t;
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    }
    for(inti=0;i<=n;i++){
        printf("%d ",&a[i]);
    }
    return 0;
}