// Frogger Race

#include <stdio.h>

int main() {
    int T; // jumlah kasus uji
    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++) {
        int K;
        scanf("%d", &K);

        int distance = 0; // jarak total yang telah dilalui
        int jumps = 0;    // jumlah lompatan

        // Menghitung jumlah lompatan sampai mencapai atau melebihi K
        while (distance < K) {
            jumps++;
            distance += jumps; // jarak bertambah sesuai jumlah lompatan
        }

        printf("Case #%d: %d\n", case_num, jumps);
    }

    return 0;
}