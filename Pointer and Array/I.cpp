// Night Game

#include <stdio.h>

int main(){
    int T, N, X[100001];
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++){
        scanf("%d", &N);
        for (int i = 0; i < N; i++){
            scanf("%d", &X[i]);
        }

        printf("Case #%d: ", tc);

        for(int i = N - 1; i >= 0; i--){
            if(i == 0){
                printf("%d\n", X[i]);
            } else {
                printf("%d ", X[i]);
            }
        }
    }
    return 0;
}