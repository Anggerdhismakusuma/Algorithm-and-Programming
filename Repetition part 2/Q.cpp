// Reading Book

#include <stdio.h>

int main() {
    int T; // jumlah kasus uji
    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++) {
        int N, X;
        scanf("%d %d", &N, &X);

        // Menghitung pembalikan dari depan
        int from_front = X / 2;

        // Menghitung pembalikan dari belakang
        int from_back = (N / 2) - (X / 2);

        // Mencari minimum pembalikan
        int min_turns = from_front < from_back ? from_front : from_back;

        printf("Case #%d: %d\n", case_num, min_turns);
    }

    return 0;
}