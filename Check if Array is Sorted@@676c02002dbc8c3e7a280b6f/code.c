// Your code here...
#include <stdio.h>

int main(){
    int arr[20];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sorted=1;
   for(int j=0;j<n-1;j++){
        if(arr[i]>arr[i+1]){
            sorted=0;
        }
    }
    if(sorted){
        printf("Sorted\n");
    }
    else{
        printf("Not Sorted\n");
    }
}