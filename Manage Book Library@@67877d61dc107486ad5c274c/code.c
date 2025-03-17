// Your code here...
#include <stdio.h>
#include <string.h>

// Define a structure for Book
typedef struct {
    char title[100];
    char author[100];
    float price;
} Book;

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // To consume the newline character

    Book books[n];
    
    // Input details for each book
    for (int i = 0; i < n; i++) {
        scanf("%99s %99s %f", books[i].title, books[i].author, &books[i].price);
    }
    
    float threshold;
    scanf("%f", &threshold);
    
    // Display books above the price threshold
    for (int i = 0; i < n; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }
    
    return 0;
}
