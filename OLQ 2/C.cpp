// Equation

#include <stdio.h>

int main(){
    long long int n, div, plus;
    scanf("%lld", &n); // n = 51
    div = n / 2; // div = 25
    plus = n - div; // plus = 51 - 25 = 26
    printf("%lld = %lld + %lld\n", n, div, plus);
    return 0;
}