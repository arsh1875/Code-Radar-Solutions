// Your code here...
#include <stdio.h>

int totalLikes(int n) {
    int shared = 5;
    int total = 0;

    for (int day = 0; day < n; day++) {
        int liked = shared / 2;
        total += liked;
        shared = liked * 3;
    }

    return total;
}
