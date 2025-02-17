// Attendance

#include <stdio.h>

int main() {
    int tim;
    scanf("%d", &tim);
    int count[tim + 1];
    for (int i = 0; i <= tim; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < tim; i++) {
        for (int j = 0; j < tim; j++) {
            int noTim = 0;
            scanf("%d", &noTim);
            if (noTim > 0 && noTim <= tim) {
                count[noTim]++;
            }
        }
    }

    int timGaLengkap = 0;
    for (int i = 1; i <= tim; i++) {
        if (count[i] < tim) {
            timGaLengkap++;
        }
    }

    printf("%d\n", timGaLengkap);

    return 0;
}