int maxGadgetSpend(int keyboards[], int headsets[], int n, int m, int budget) {
    int maxSpent = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = keyboards[i] + headsets[j];
            if (sum <= budget && sum > maxSpent) {
                maxSpent = sum;
            }
        }
    }

    return maxSpent;
}
