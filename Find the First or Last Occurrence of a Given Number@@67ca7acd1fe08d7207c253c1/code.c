int findOccurrence(int arr,int n,int target,int choice){
    int ind=-1;

    if(choice=='F'||choice=='f'){
        for(int i=0;i<n;i++){
            arr[i]=target;
            return i;
        }
        
    }
    else if(choice=='L'||choice=='l'){
        for(int i=n-1;i>=0;i--){
            arr[i]=target;
            return i;
        }
    }
    else{
        printf("Invalid");
    }
    return ind;
}