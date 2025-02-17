// STONKS

#include <stdio.h>

int main(){
    long long int N, A, total = 0;
    scanf("%lld", &N);
    for (int i = 0; i < N; i++){
        scanf("%lld", &A);
        if(A > 0){
            total += A;
        }
    }
    printf("%lld\n", total);
    return 0;
}