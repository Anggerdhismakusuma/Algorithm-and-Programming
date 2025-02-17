// Baloons

#include <stdio.h>

int main() {
    int N;
    long long P;
    scanf("%d %lld", &N, &P);
    int count = 0;
    long long power;
    
    for (int i = 0; i < N; i++) {
        scanf("%lld", &power);
        if (P > power) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
