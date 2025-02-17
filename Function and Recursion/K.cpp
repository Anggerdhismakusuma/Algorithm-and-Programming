// Not Fibonacci

#include <stdio.h>

int fibonacci(int n, int f0, int f1){
    if (n == 0) return f0;
    if (n == 1) return f1;
    int a = f0, b = f1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n, f0, f1;
    scanf("%d %d", &f0, &f1);
    scanf("%d", &n);
    printf("%d\n", fibonacci(n, f0, f1));    
    return 0;
}