// All the wind

#include <stdio.h>

long long int num[101][101];

int main(){
    int T, N;
    scanf("%d", &T);
    for (int tc = 0; tc < T; tc++){
        scanf("%d", &N);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                scanf("%lld", &num[i][j]);
            }
        }

        printf("Case #%d: ", tc + 1);
        
        for(int j = 0; j < N; j++){
            long long int sum = 0;
            for(int i = 0; i < N; i++){
                sum += num[i][j];
            }

            if(j == N - 1){
                printf("%lld\n", sum);
            } else {
                printf("%lld ", sum);
            }
        }
    }
    return 0;
}