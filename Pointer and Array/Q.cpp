// Light

#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++){
        int temenJojo[55][55];
        int N, M, Q;
        scanf("%d %d %d", &N, &M, &Q);
        int result[M] = {};
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                scanf("%d", &temenJojo[i][j]);
            }
        }
        for(int i = 0; i < Q; i++){
            int X;
            scanf("%d", &X);
            for(int j = 0; j < M; j++){
                result[j] += temenJojo[X-1][j]; 
                result[j] %= 2;
            }
        }
        printf("Case #%d:\n", tc);
        for(int i = 0; i < M; i++){
            result[i] ? printf("YES\n") : printf("NO\n");
        }
    }
    return 0;
}