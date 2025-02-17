// More Addition!

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int count = 0;
    for (int j = 0; j <= N; j++) {
        for (int l = 0; l <= N - j; l++) {
            int b = N - j - l;
            if (b >= 0) {
                count++;
            }
        }
    }
    
    printf("%d\n", count);
    return 0;
}