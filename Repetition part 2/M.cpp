// Free Food

#include <stdio.h>

int main () {
    int T, N, M, harga, temp = 0;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        scanf("%d %d", &N, &M);
        for (int i = 0; i < N; i++){
            scanf("%d", &harga);
            temp += harga;
        }
        if (temp > M) {
            printf("Case #%d: Wash dishes\n", tc);
        } else {
            printf("Case #%d: No worries\n", tc);
        }
        temp = 0;
    }
    return 0;
}