// Starship Cruader

#include <stdio.h>

int main(){
    int T, X[100001] = {}, Y[100001] = {};
    scanf("%d", &T); getchar();
    for (int tc = 0; tc < T; tc++){
        
        int N;
        int count = 0;
        scanf("%d", &N);
        
        for (int i = 0; i < N; i++){
            scanf("%d", &X[i]); getchar();
        }

        for (int i = 0; i < N; i++){
            scanf("%d", &Y[i]); getchar();
        }

        for (int i = 0; i < N; i++){
            if(X[i] < Y[i]){
                count++;
            }
        }

        printf("Case #%d: %d\n", tc + 1, count);
    }
    return 0;
}