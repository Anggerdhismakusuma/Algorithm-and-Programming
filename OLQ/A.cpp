// Sum of Series

#include <stdio.h>

int main() {
    long long int A, B, n, sum;
    scanf("%lld %lld", &A, &B);
    n = B - A + 1;
    sum = n * (A + B) / 2;
    printf("%lld\n", sum);
    return 0;
}
