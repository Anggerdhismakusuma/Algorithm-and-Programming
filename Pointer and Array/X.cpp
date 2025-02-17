#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        long long int anak, coklat, nilaiMax, total = 0;
        long long int coklatDibawa[10005];
        scanf("%lld %lld", &anak, &coklat);
        for (int i = 0; i < anak; i++) {
            // Membaca coklat yang dibawa oleh anak ke-i
            for (int j = 0; j < coklat; j++) {
                scanf("%lld", &coklatDibawa[j]);
            }
            // Mencari nilai maksimum dari coklat yang dibawa
            nilaiMax = coklatDibawa[0]; // Inisialisasi nilaiMax
            for (int j = 1; j < coklat; j++) {
                if (coklatDibawa[j] > nilaiMax) {
                    nilaiMax = coklatDibawa[j];
                }
            }
            // Tambahkan nilai maksimum ke total
            total += nilaiMax;
        }
        printf("Case #%d: %lld\n", tc, total);
    }
    return 0;
}