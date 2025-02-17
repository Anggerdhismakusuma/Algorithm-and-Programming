// Array

#include <stdio.h>

int main(){
    int N;
    int A[10001], B[10001], C[10001];
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++){
        scanf("%d", &B[A[i]]);
    }

    for (int i = 0; i < N; i++){
        if(i == N - 1){
            printf("%d\n", B[i]);
        } else {
            printf("%d ", B[i]);
        }
    }
    return 0;
}