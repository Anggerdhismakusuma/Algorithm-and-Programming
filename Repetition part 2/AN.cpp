// Lightning

#include <stdio.h>

int main(){
    int T, A, B, C, D, E, F;
    scanf("%d", &T); getchar();
    for (int tc = 1; tc <= T; tc++) {
        scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);
        printf("Case #%d: ", tc);
        for (int a = 1; a <= A; a++) printf("a");
        for (int s = 1; s <= B; s++) printf("s");
        for (int h = 1; h <= C; h++) printf("h");
        for (int i = 1; i <= D; i++) printf("i");
        for (int a2 = 1; a2 <= E; a2++) printf("a");
        for (int p = 1; p <= F; p++) printf("p");
        printf("\n");
    }
    return 0;
}