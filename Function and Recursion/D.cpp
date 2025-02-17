// Till One

#include <stdio.h>
#define ll long long

ll func(ll N){
    if (N == 1) return 1;
    else if (N % 2 == 0) return func(N/2);
    else return func(N-1) + func(N+1);
}

int main(){
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++){
        ll N;
        scanf("%lld", &N);
        printf("Case #%d: %lld\n", tc, func(N));
    }
    return 0;
}