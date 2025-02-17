// Toys

#include <stdio.h>

int main(){
    int T, N, A, B, C, D;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++){
        scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
        int total = 0;
        for (int j = 1; j <= N; j++){
            if(j % A == 0 || j % B == 0 || j % C == 0 || j % D == 0){
                total++;
            }
        }
        printf("Case #%d: %d\n", i, total);
    }
        
    return 0;
}