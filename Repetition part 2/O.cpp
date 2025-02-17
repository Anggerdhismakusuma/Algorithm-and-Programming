// Stay or Swap

#include <stdio.h>

int main() {
    int T; // jumlah kasus uji
    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++) {
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);

        int max_portion = -1; // untuk menyimpan porsi terbesar yang bisa diambil
        for (int i = 0; i < N; i++) {
            int portion;
            scanf("%d", &portion);
            // Cek apakah porsi bisa diambil
            if (portion <= M && portion > K) {
                if (portion > max_portion) {
                    max_portion = portion; // ambil porsi terbesar
                }
            }
        }

        // Jika tidak ada porsi yang valid, tetap ambil porsi awal K
        if (max_portion == -1) {
            max_portion = K;
        }

        printf("Case #%d: %d\n", case_num, max_portion);
    }

    return 0;
}