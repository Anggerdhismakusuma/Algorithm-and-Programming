// FiboCount

#include <stdio.h>

int count = 0;
int Fibo(int n) {
    count++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Fibo(n - 1) + Fibo(n - 2);
}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int n;
        scanf("%d", &n);
        count = 0;
        Fibo(n);
        printf("Case #%d: %d\n", tc, count);
    }

    return 0;
}
