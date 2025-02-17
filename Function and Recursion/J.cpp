// Epic Games

#include <stdio.h>

void func(long long int N, int *count){
    if (N == 1) {
        return;
    } else if (N % 2 == 0) {
        (*count)++;
        func(N/2, count);
    } else if (N % 2 == 1) {
        (*count)++;
        func(N*3+1, count);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        long long int N;
        scanf("%lld", &N);
        int count = 0;
        func(N, &count);
        printf("Case #%d: ", tc);
        if (count % 2 == 0) printf("Lili\n");
        else printf("Jojo\n");
    }
}
