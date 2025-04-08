int incrementToPrimeDigits(int N) {
    if (N == 0)
        return 0;

    int result = 0, multiplier = 1;

    while (N > 0) {
        int digit = N % 10;
        N /= 10;

        // Map digit to next prime
        int nextPrime;
        if (digit < 2) nextPrime = 2;
        else if (digit < 3) nextPrime = 3;
        else if (digit < 5) nextPrime = 5;
        else if (digit < 7) nextPrime = 7;
        else nextPrime = 2; // wrap around

        result += nextPrime * multiplier;
        multiplier *= 10;
    }

    return result;
}
