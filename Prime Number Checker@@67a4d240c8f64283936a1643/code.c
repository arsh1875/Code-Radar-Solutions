#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
    }
    bool prm=1;

    for(int i=2;(n-1);i++){
        if(n%i==0){
            prm=0;
        }
    }
    if(prm==0){
        return 0;
    }
    else{
        return 1;
    }
    return 0;
}
