#include <stdio.h>

long long func(long long m, long long n){
    if (m == 0) return 0;
    return m + (n - 1) + (n - 1) * func(m - 1, n - 1) % 100000000;
}

int main(){
    int T;
    scanf("%d", &T);
    for (int tc = 0; tc < T; tc++){
        int N, M;
        scanf("%d %d", &M, &N);
        printf("Case #%d: %lld\n", tc, func(M, N));
    }
    
    return 0;
}