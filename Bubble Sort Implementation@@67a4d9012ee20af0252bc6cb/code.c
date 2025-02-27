#include<stdio.h>
int bubbleSort(int arr[100],int n);
int PrintArray(int arr[100],int n);
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    bubbleSort(arr,n);
    PrintArray(arr,n);
    return 0;
}

int bubbleSort(int a[100],int n){
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
}
int PrintArray(int arr[100];int n){
    for(int i=0;i<n;i++){
        printf("%d ",&a[i]);
    }
}