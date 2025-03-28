// Your code here...
#include<stdio.h>

int main(){
    int n;
    int arr[];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int min=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            min=i;
        }
    }
    return min;
    
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            max=i;
        }
    }
    return max;

    printf("%d %d",min,max);
}