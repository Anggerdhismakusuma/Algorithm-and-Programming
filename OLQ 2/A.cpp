// Bitshifting

#include <stdio.h>

int main(){
    long long int a, b, n, shift;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++){
        scanf("%lld %lld", &a, &b);
        shift = ((a / b) << b);
        printf("%lld\n", shift);
    }
    return 0;
}