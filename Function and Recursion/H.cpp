// FiboString

#include <stdio.h>
#include <string.h>

void fibonacci_string(int n, char s0, char s1) {
    if (n == 0) {
        printf("%c", s0);
    } else if (n == 1) {
        printf("%c", s1);
    } else {
        fibonacci_string(n - 1, s0, s1);
        fibonacci_string(n - 2, s0, s1);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        int n;
        char s0, s1;
        scanf("%d %c %c", &n, &s0, &s1);
        printf("Case #%d: ", tc);
        fibonacci_string(n, s0, s1);
        printf("\n");
    }

    return 0;
}
