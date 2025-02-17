#include <stdio.h>

int main(){
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int LHS = a * b;
    long long int RHS = c + b;
    if (LHS > RHS)
    {
        printf("True\n");
    } else
    {
        printf("False\n");
    }
    

    return 0;
}