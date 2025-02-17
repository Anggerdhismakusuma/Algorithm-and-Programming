// Match

#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++){
        int N, bibi, lili;
        scanf("%d", &N);
        int A[10001];
        for(int i = 0; i < N; i++){
            scanf("%d", &A[i]);
        }
        int P, Q;
        scanf("%d %d", &P, &Q);
        bibi = A[P-1];
        lili = A[Q-1];
        printf("Case #%d : ", tc);
        if(bibi > lili){
            printf("Bibi\n");
        } else if (lili > bibi){
            printf("Lili\n");
        } else {
            printf("Draw\n");
        }
    }
    return 0;
}