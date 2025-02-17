// Exclusive price

#include <stdio.h>

int main(){
    int n, a, count[1005];
    scanf("%d", &n);

    for (int i = 0; i <= 1000; i++){
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        count[a]++;
    }
    int max = 0;
    for (int i = 0; i <= 1000; i++) {
        if (count[i] > max) {
            max = count[i];
        }
    }
    printf("%d\n", max);
    return 0;
}