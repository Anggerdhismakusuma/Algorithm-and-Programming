// Puzzle

#include <stdio.h>
#include <stdbool.h>

int main(){
    int N;
    scanf("%d", &N);
    int matriks[N+5][N+5];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matriks[i][j]); getchar();
        }
    }
    
    for (int i = 0; i < N; i++) {
        bool flag[N + 1] = {false};
        for (int j = 0; j < N; j++) {
            int value = matriks[i][j];
            if (flag[value]) {
                printf("Nay\n");
                return 0;
            }
            flag[value] = {true};
        }
    }

    for (int j = 0; j < N; j++) {
        bool flag[N + 1] = {false};
        for (int i = 0; i < N; i++) {
            int value = matriks[i][j];
            if (flag[value]) {
                printf("Nay\n");
                return 0;
            }
            flag[value] = {true};
        }
    }
    printf("Yay\n");
    return 0;
}