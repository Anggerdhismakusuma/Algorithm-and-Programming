// Clarify

#include <stdio.h>

int main(){
    int N;
    int counter = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int tc, ts, tv;
        scanf("%d %d %d", &tc, &ts, &tv);
        if (ts > tv) counter++;
    }
    printf("%d\n", counter);
    counter = 0;
    return 0;
}