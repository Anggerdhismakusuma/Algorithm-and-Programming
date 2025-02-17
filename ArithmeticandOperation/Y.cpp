#include <stdio.h>

int main(){
    long long int a, b, c, total;
    scanf("%lld %lld %lld", &a, &b, &c);
    total = a * b * c;
    printf("%lld\n", total);
    return 0;
}