// Team Trees

#include <stdio.h>

int totalPohon(int A[], int n) {
    if (n == 0) {
        return 0;
    }
    return A[n - 1] + totalPohon(A, n - 1);
}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        printf("Case #%d: %d\n", tc, totalPohon(A, N));
    }
    return 0;
}
