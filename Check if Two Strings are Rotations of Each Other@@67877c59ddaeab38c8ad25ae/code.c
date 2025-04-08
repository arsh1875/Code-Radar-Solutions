// Your code here...
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int areRotations(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) return 0;

    // Allocate memory for concatenated string
    char *concat = (char *)malloc(sizeof(char) * (2 * len1 + 1));
    if (!concat) return 0; // Memory allocation check

    strcpy(concat, s1);
    strcat(concat, s1);

    int result = strstr(concat, s2) != NULL;

    free(concat);
    return result;
}
int main() {
    char str1[];
    scanf("%s",str1);
    char str2[];
    scanf("%s",str2);

    if (areRotations(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
