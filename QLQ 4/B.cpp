// Clock

#include <stdio.h>

int main() {
    int T, hour, minute;
    char A, P;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        scanf("%d:%d %c%c", &hour, &minute, &A, &P);
        if (hour >= 12 && A == 'a') {
            hour -= 12;
        } else if (hour < 12 && A == 'p') {
            hour += 12;
        }
        printf("Case #%d: %02d:%02d\n", i, hour, minute);
    }

    return 0;
}
