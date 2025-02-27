// Your code here...
#include <stdio.h>

int main(){
    int arr[20];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>arr[j+1]){
            printf("Not Sorted");
        }
        else{
            printf("Sorted");
        }
    }
}