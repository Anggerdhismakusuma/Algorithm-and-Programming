// Sum

#include <stdio.h>

long long int a[1001][1001];

int main(){
    int T, X;
    scanf("%d", &T);
    for (int tc = 0; tc < T; tc++){
        scanf("%d", &X);
        for (int i = 0; i < X; i++){
            for (int j = 0; j < X; j++){
                scanf("%lld", &a[i][j]);
            }
        }

        printf("Case #%d: ", tc + 1);

        for (int j = 0; j < X; j++){
            int sum = 0;
            for (int i = 0; i < X; i ++){
                sum += a[i][j];
            }
            if(j == X - 1){
                printf("%d\n", sum);
            } else {
                printf("%d ", sum);
            }
        }
    }

    return 0;
}