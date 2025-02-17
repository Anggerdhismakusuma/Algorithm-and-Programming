// Garden

#include <stdio.h>

int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    int matrix[X+5][Y+5];
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int change;
    scanf("%d", &change);
    for(int i = 0; i < change; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        matrix[a-1][b-1] = c;
    }
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            if (j == Y - 1) printf("%d", matrix[i][j]);
            else printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}