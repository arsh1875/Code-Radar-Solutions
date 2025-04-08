// Your code here...
int incrementToPrimeDigits(int N) {
    int result = 0, multiplier = 1;
    
    // Traverse each digit from right to left
    while (N > 0) {
        int digit = N % 10;
        N /= 10;

        // Find next prime digit (from 2, 3, 5, 7)
        int nextPrime;
        if (digit < 2) nextPrime = 2;
        else if (digit < 3) nextPrime = 3;
        else if (digit < 5) nextPrime = 5;
        else if (digit < 7) nextPrime = 7;
        else nextPrime = 2;  // wrap around for 7, 8, 9

        // Form the result number from right to left
        result += nextPrime * multiplier;
        multiplier *= 10;
    }

    return result;
}
