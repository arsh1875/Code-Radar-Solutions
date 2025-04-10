int findOccurrence(int arr[],int n,int target,int mode){
    int ind=-1;

    if(mode=='F'||mode=='f'){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return i;
            }
        }
        
    }
    else if(mode=='L'||mode=='l'){
        for(int i=n-1;i>=0;i--){
            if(arr[i]==target){
                return i;
            }
        }
    }
    return ind;

}

