#include <stdio.h>

int maxGadgetSpend(int keyboards[], int headsets[], int n, int m, int budget) {
    int maxSpent = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int total = keyboards[i] + headsets[j];
            if (total <= budget && total > maxSpent) {
                maxSpent = total;
            }
        }
    }
    return maxSpent;
}

int main() {
    int budget, n, m;
    scanf("%d %d %d", &budget, &n, &m);

    // Use dynamic arrays for safety (optional)
    int keyboards[100], headsets[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &keyboards[i]);
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &headsets[i]);
    }

    int result = maxGadgetSpend(keyboards, headsets, n, m, budget);
    printf("%d\n", result);

    return 0;
}
