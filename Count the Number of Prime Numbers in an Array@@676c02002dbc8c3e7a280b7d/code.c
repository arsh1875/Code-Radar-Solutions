#include<stdio.h>
int isprm(int n){
    if(n==0||n==1){
        return 0;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(isprm(arr[i])){
            count++;
        }
    }
    printf("%d",count);
}