// Honey

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int A, B;
        scanf("%d %d", &A, &B);
        int total_madu = A;
        int botol_kosong = A;

        while (botol_kosong >= B) {
            int madu_baru = botol_kosong / B;
            total_madu += madu_baru;
            botol_kosong = botol_kosong % B + madu_baru;
        }
        printf("Case #%d: %d\n", tc, total_madu);
    }

    return 0;
}
