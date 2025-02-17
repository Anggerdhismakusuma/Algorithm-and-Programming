// Colorfull alphabet

#include <stdio.h>

int main(){
    int T, N, a = 97;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++){
        scanf("%d", &N);
        printf("Case #%d: ", tc);
        for (int i = 0; i < N; i++){
            printf("%c", a);
            a++;;
        }
        puts("");
        a = 97;
    }
    return 0;
}