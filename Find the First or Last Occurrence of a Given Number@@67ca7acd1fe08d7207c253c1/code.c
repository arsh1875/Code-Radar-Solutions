// Your code here...

// Function to find first or last occurrence of an element
int findOccurrence(int arr[], int n, int target, char choice) {
    int ind=-1;

    if(choice=='F'||choice=='f'){
        for(int i=0;i<=n;i++){
            arr[i]=target;
            return i;
        }
        
    }
    if(choice=='L'||choice=='l'){
        for(int i=n-1;i>0;i--){
            arr[i]=target;
            return i;
        }
    }
    else{
        printf("Invalid");
        return ind;
    }
    
}