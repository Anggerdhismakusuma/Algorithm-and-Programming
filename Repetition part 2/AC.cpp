// Candy

#include <stdio.h>

int main(){
    int T;
    long long int N, M, P, total, hargaTermurah;
    scanf("%d", &T); getchar();
    for(int i = 1; i <= T; i++){
        scanf("%lld %lld", &N, &M); getchar();
        for (int j = 0; j < N; j++){
            scanf("%lld", &P);
            if(j == 0){
                hargaTermurah = P;
            }else if(P < hargaTermurah){
                hargaTermurah = P;
            }
            total = M / hargaTermurah;
        }
        printf("Case #%d: %lld\n", i, total);
    }
    return 0;
}