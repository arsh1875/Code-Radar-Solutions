#include <stdio.h>
#include <string.h>

struct book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct book books[n];  // Variable-length array (VLA)

    for (int i = 0; i < n; i++) {
        scanf("%99s %99s %f", books[i].title, books[i].author, &books[i].price);
    }

    float th;
    scanf("%f", &th);

    for (int i = 0; i < n; i++) {
        if (books[i].price > th) {
            printf("%s %s %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }

    return 0;
}
