// Your code here...
int maxGadgetSpend(int keyboards[], int headsets[], int n, int m, int budget) {
    int maxSpend = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int total = keyboards[i] + headsets[j];
            if (total <= budget && total > maxSpend) {
                maxSpend = total;
            }
        }
    }

    return maxSpend;
}
