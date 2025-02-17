// Hard Problem

#include <stdio.h>

int main() {
    int T, N, nilai, temp = 0;
    char jawaban[100], kunci[100];
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        scanf("%d", &N); getchar();
        scanf("%[^\n]", jawaban); getchar();
        scanf("%[^\n]", kunci); getchar();
        for (int i = 0; i < N; i++) {
            if (jawaban[i] == kunci[i]) {
                temp++;
            }
        }
        nilai = temp * 100 / N;
        printf("Case #%d: %d\n", tc, nilai);
        nilai = 0;
        temp = 0;
    }
    return 0;
}