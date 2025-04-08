// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

// Compare function for qsort
int cmp(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int countDistinctSubstrings(char *s) {
    int len = strlen(s);
    char *substrings[MAX];
    int count = 0;

    // Generate all substrings
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            char *sub = (char *)malloc(j - i + 1);
            strncpy(sub, s + i, j - i);
            sub[j - i] = '\0';
            substrings[count++] = sub;
        }
    }

    // Sort the substrings
    qsort(substrings, count, sizeof(char *), cmp);

    // Count unique substrings
    int uniqueCount = 1;
    for (int i = 1; i < count; i++) {
        if (strcmp(substrings[i], substrings[i - 1]) != 0) {
            uniqueCount++;
        }
    }

    // Free memory
    for (int i = 0; i < count; i++) {
        free(substrings[i]);
    }

    return uniqueCount;
}


int main() {
    char str[100];
    scanf("%s",str);
    int result = countDistinctSubstrings(str);
    printf("%d\n", result);
    return 0;
}
