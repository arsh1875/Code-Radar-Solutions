// Your code here...
int mountainPeak(int N) {
    char str[20];
    sprintf(str, "%d", N);
    int len = 0;
    while (str[len] != '\0') len++;

    if (len < 3)
        return -1;

    int i = 0;

    // Strictly increasing
    while (i + 1 < len && str[i] < str[i + 1])
        i++;

    // Peak can't be first or last
    if (i == 0 || i == len - 1)
        return -1;

    // Strictly decreasing
    while (i + 1 < len && str[i] > str[i + 1])
        i++;

    // If reached end, it's a valid mountain
    if (i == len - 1)
        return str[i - 1] - '0';  // Peak digit

    return -1;
}
