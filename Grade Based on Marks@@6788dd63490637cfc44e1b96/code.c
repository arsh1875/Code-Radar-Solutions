#include <stdio.h>

int main() {
    int ch;

    // Input from user
    scanf("%d", &ch);

    // Check if vowel
    if(90>=ch){
        printf("A");
    }
    if(90>ch>=80){
        printf("B");
    }
    if(80>ch>=70){
        printf("C");
    }
    if(70>ch>=60){
        printf("D");
    }
    if(60>ch){
        printf("F");
    }

    return 0;
}
