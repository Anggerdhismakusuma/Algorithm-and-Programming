#include <stdio.h>

int jojonanci(int N, int X, int Y) {
    if (N == 0) return X;
    else if (N == 1) return Y;
    int A0 = X, A1 = Y, AN = 0;
    for (int i = 2; i <= N; i++) {
        AN = A1 - A0;
        A0 = A1;
        A1 = AN; 
    }
    return AN;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        int result = jojonanci(N, X, Y);
        printf("Case #%d: %d\n", tc, result);
    }
    return 0;
}
