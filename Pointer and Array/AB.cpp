// Get Some Result

#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++){
        int N;
        scanf("%d", &N);
        int matrix1[N][N];
        int matrix2[N][N];
        int matrix3[N][N];
        int total1[N][N];
        int total2[N][N];
        // ENTER THE MATRIX 1
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                scanf("%d", &matrix1[i][j]);
            }
        }

        // ENTER THE MATRIX 2
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                scanf("%d", &matrix2[i][j]);
            }
        }

        // ENTER THE MATRIX 3
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                scanf("%d", &matrix3[i][j]);
            }
        }

        // MULTIPLICATION OF MATRIX 1 AND MATRIX 2
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                total1[i][j] = 0;
                for(int k = 0; k < N; k++){
                    total1[i][j] += matrix1[i][k] * matrix2[k][j]; 
                }
            }
        }

        // MULTIPLICATION OF RESULT 1 * 2 AND MATRIX 3;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                total2[i][j] = 0;
                for(int k = 0; k < N; k++){
                    total2[i][j] += total1[i][k] * matrix3[k][j];
                }
            }
        }

        // PRINT THE RESULT
        printf("Case #%d:\n", tc);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(j == N - 1){
                    printf("%d\n", total2[i][j]);
                } else {
                    printf("%d ", total2[i][j]);
                }
            }
        }
    }
    return 0;
}
