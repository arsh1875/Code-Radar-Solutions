#include <stdio.h>

int main() {
    char name[50], hobby[50];  // Use arrays to store strings
    int age;

    scanf("%49s", name);  // Limit input to prevent buffer overflow

    scanf("%d", &age); // Use &age to store input in the variable

    scanf("%49s", hobby);  // Limit input length

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
