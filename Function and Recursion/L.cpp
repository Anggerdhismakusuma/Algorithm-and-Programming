// Jojonanci

#include <stdio.h>

int jojonanci(int n, int x, int y){
    if (n == 0) return x;
    else if (n == 1) return y;
    int A0 = x, A1 = y, AN = 0;
    for (int i = 2; i <= n; i++) {
        AN = A1 - A0;
        A0 = A1;
        A1 = AN; 
    }
    return AN;
}

int main(){
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++){
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        printf("Case #%d: %d\n", tc, jojonanci(N, X, Y));
    }
    return 0;
}