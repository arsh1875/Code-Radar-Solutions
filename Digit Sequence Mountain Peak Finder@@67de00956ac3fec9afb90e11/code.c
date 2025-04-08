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

    // Save peak index
    int peakIndex = i;

    // Peak can't be first or last
    if (peakIndex == 0 || peakIndex == len - 1)
        return -1;

    // Strictly decreasing
    while (i + 1 < len && str[i] > str[i + 1])
        i++;

    // If reached end, it's a valid mountain
    if (i == len - 1)
        return str[peakIndex] - '0';  // Corrected to actual peak

    return -1;
}
