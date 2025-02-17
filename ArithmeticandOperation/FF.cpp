#include <stdio.h>

int main(){
    long long int n, hit = 0;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        hit += 100 + (50*i);
    }
    printf("%lld\n", hit);

    return 0;
}