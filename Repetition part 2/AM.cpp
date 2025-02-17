// Count and Count

#include <stdio.h>

int main(){
    long long int T, N;
    scanf("%lld", &T);
    for(int tc = 1; tc <= T; tc++){
        scanf("%lld", &N);
        printf("Case #%d:\n", tc);
        for (int j = 1; j <= N; j++){
            if (j % 15 == 0) {
                printf("%d Lili\n", j);
            } else if (j % 3 == 0 || j % 5 == 0) {
                printf("%d Jojo\n", j);
            } else {
                printf("%d Lili\n", j);
            }
            }
        }
    return 0;
    }
