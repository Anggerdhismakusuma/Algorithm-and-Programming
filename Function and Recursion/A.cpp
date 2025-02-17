// Recursion

#include <stdio.h>

int count = 0;
int func(int n){
    if (n == 0) return 1;
    if (n == 1) return 2;
    if (n % 3 == 0){
        count++;
    }
    if (n % 5 == 0) return n * 2;
    return func(n - 1) + n + func(n - 2) + (n - 2);
}

int main(){
    int T, n;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++){
        scanf("%d", &n);
        int result = func(n);
        printf("Case #%d: %d %d\n", tc, result, count);
        count = 0;
    }
    return 0;
}