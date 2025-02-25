// Your code here...
//maine apne aap hi kiya hai
#include <stdio.h>

int main() {
    int arri;
    scanf("%d\n",&arri);
    int arr[arri];  // Array declaration
    int i;

    // Taking input from user
    for (i = 0; i < 10; i++) {  // ✅ Fix: Start from index 0
        scanf("%d", &arr[i]);  // ✅ Fix: Use `&` to correctly store input
    }

    int counte = 0;
    int counto = 0;

    // Counting even and odd elements
    for (i = 0; i < 10; i++) {  // ✅ Fix: Iterate through all elements
        if (arr[i] % 2 == 0) {
            counte++;  // ✅ Count even numbers
        } else {
            counto++;  // ✅ Count odd numbers
        }
    }

    // Printing results
    printf("%d %d\n", counto, counte);

    return 0;
}
