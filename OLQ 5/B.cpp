// Box of Chocolate

#include <stdio.h>

int main(){
    int T, N, M;
    long long int A, temp, total = 0;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        scanf("%d %d", &N, &M);
        for (int i = 0; i < N; i++) {
        	temp=0;
            for (int j = 0; j < M; j++){
                scanf("%lld", &A);
                if (temp < A) {
                    temp = A;
				}
            }
            total += temp;
        }
        printf("Case #%d: %lld\n", tc, total);
        total = 0;
    }
    return 0;
}
