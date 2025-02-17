// Guess The Number

#include <stdio.h>

int main(){
    int M, N;
    scanf("%d %d", &N, &M);
    for (int i = 0; i <= M; i++){
        printf("%d\n", N++);
    }
    return 0;
}
