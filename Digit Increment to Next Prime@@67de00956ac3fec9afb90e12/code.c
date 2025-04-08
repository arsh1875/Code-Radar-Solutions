int incrementToPrimeDigits(int N) {
    int result = 0, multiplier = 1;

    // Special case: input is 0 (digit 0 → next prime 2)
    if (N == 0)
        return 2;

    while (N > 0) {
        int digit = N % 10;
        N /= 10;

        int nextPrime;

        if (digit < 2) nextPrime = 2;
        else if (digit < 3) nextPrime = 3;
        else if (digit < 5) nextPrime = 5;
        else if (digit < 7) nextPrime = 7;
        else nextPrime = 2; // wrap around for 7, 8, 9

        result += nextPrime * multiplier;
        multiplier *= 10;
    }

    return result;
}
