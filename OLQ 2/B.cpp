// Dessert

#include <stdio.h>

int main(){
    long long int n, posib;
    scanf("%lld", &n);
    posib = (1ULL << n) - 1;
    printf("%lld\n", posib);
    return 0;
}