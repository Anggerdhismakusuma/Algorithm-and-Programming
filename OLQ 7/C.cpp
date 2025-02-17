#include <stdio.h>

long long memo[105];
long long jobonacci(int N){
    if(N == 0) return 0;
    else if (N == 1 || N == 2)return 1;
    else if (memo[N] != -1) return memo[N];
    memo[N] = jobonacci(N-1)+jobonacci(N-2);
    return memo[N];
}

int main(){
    for (int i = 0; i < 100; i++){
        memo[i] = -1;
    }
    int N;
    scanf("%d", &N);
    int result = jobonacci(N);
    printf("%lld\n", result);
    return 0;
}