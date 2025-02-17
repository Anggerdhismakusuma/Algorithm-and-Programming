// SUMmer Vacation

#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int tc = 1; tc <= T; tc++) {
        int N;
        scanf("%d", &N);
        
        int A[1001];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int sumFound[100001];
        int count = 0;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int sum = A[i] + A[j];
                int flag = 0;
                for (int k = 0; k < count; k++) {
                    if (sumFound[k] == sum) {
                        flag = 1;
                        break;
                    }
                }
                if (!flag) {
                    sumFound[count++] = sum;
                }
            }
        }

        int factor = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < count; j++) {
                if (A[i] == sumFound[j]) {
                    factor++;
                    break;
                }
            }
        }

        printf("Case #%d: %d\n", tc, factor);
    }

    return 0;
}
