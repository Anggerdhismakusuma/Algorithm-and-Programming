// Odd Jobonacci

#include <stdio.h>

int oddJobonacci(int n){
    if (n == 0) return 0;
    else if (n % 2 == 1) return 1;
    else return oddJobonacci(n - 1) + oddJobonacci(n - 2);
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", oddJobonacci(N));
    return 0;
}