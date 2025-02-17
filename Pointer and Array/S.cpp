// Clever Math

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int A, B;
        scanf("%d %d", &A, &B);

        int result = 0;
        int multiplier = 1;
        
        while (A > 0 || B > 0) {
            int digitA = A % 10;
            int digitB = B % 10;
            
            int sum = (digitA + digitB) % 10;

            result += sum * multiplier;

            A /= 10;
            B /= 10;
            multiplier *= 10;
        }

        printf("Case #%d: %d\n", t, result);
    }

    return 0;
}
