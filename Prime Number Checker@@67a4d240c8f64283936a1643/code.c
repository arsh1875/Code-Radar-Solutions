#include <stdio.h>

int isPrime(int num) {
    int count=0;
    if (num < 2){ 
        return 1;
    }    

    for (int i = 2; i<= num; i ++) { 
        if (num % i == 0) {
            return 0;
        }
    }
    return 0;
}

