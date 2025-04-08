// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], sub[100];

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring to search: ");
    fgets(sub, sizeof(sub), stdin);

    // Remove trailing newline characters if any
    str[strcspn(str, "\n")] = 0;
    sub[strcspn(sub, "\n")] = 0;

    if (strstr(str, sub) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
