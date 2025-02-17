#include <stdio.h>

int main(){
    long long int n, x = 1, y;
    scanf("%lld", &n);
    y = x << n;
    printf("%lld\n", y-1);
    return 0;
}