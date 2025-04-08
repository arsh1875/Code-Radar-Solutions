int incrementToPrimeDigits(int N) {
    int result = 0, multiplier = 1;

    if (N == 0) {
        return 0;
    }

    while (N > 0) {
        int digit = N % 10;
        int nextPrime;

        if (digit < 2) nextPrime = 2;
        else if (digit < 3) nextPrime = 3;
        else if (digit < 5) nextPrime = 5;
        else if (digit < 7) nextPrime = 7;
        else nextPrime = 2;

        result += nextPrime * multiplier;
        multiplier *= 10;
        N /= 10;
    }

    return result;
}
