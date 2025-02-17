// Eleven

#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int nomorKasus = 1; nomorKasus <= T; nomorKasus++) {
        char N[10000001];
        scanf("%s", N);

        int sum_odd = 0, sum_even = 0;
        int len = strlen(N);

        for (int i = 0; i < len; i++) {
            int digit = N[i] - '0';
            if (i % 2 == 0) {
                sum_even += digit;
            } else {
                sum_odd += digit;
            }
        }

        int diff = sum_even - sum_odd;

        if (diff % 11 == 0) {
            printf("Case #%d: Yeah\n", nomorKasus);
        } else {
            printf("Case #%d: Nah\n", nomorKasus);
        }
    }

    return 0;
}
