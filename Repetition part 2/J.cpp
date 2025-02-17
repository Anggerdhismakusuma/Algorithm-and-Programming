// Items

#include <stdio.h>

int main(){
    int T, N;
    long long int a, total = 0;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++){
        scanf("%d", &N);
        for (int j = 0; j < N; j++){
            scanf("%lld", &a);
            total += a;
        }
        printf("Case #%lld: %lld\n", i, total);
        total = 0;
    }
    return 0;
}
