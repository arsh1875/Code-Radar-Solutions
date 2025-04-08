// Your code here...
int digitRightShift(int N) {
    char str[20];
    sprintf(str, "%d", N);

    int len = 0;
    while (str[len] != '\0') len++;

    // If it's a single digit, shifting doesn't change it
    if (len == 1) return N;

    // Perform right shift
    char last = str[len - 1];
    for (int i = len - 1; i > 0; i--) {
        str[i] = str[i - 1];
    }
    str[0] = last;
    str[len] = '\0';

    int shifted = atoi(str);

    return shifted;
}
