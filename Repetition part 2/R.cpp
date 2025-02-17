// Bibi's Residence

#include <stdio.h>

int main(){
    long long int T, N, temp;
    scanf("%lld", &T);
    for (int tc = 1; tc <= T; tc++){
        scanf("%lld", &N);
        long long int diff = 0, X[100001]= {};
        temp = 99999999;
        for (int i = 0; i < N; i++){
            scanf("%lld", &X[i]);     
        }
        for (int i = 0; i < N-1; i++){
            diff = X[i] - X[i + 1];
            if (diff < 0){
                diff = -diff;
            }
            if (i == 0 || diff < temp){ 
                temp = diff;
            }
        }
        printf("Case #%d: %lld\n", tc, temp);
    }
    return 0;
}