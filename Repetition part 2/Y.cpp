// Photo

#include <stdio.h>

int main() {
    int T, N, M;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        scanf("%d %d", &N, &M);
        printf("Case #%d:\n", t);
        for (int j = 0; j < M; j++) {
            printf("#");
        }
        printf("\n");
        for (int i = 0; i < N - 2; i++) {
            printf("#");
            for (int j = 0; j < M - 2; j++) {
                printf(" ");
            }
            printf("#\n");
        }
        for (int j = 0; j < M; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
