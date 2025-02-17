// Learning Binary

#include <stdio.h>

int main(){
    int T, X, P, binary;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%d %d", &X, &P);
        binary = (X >> P) & 1;
        printf("%d\n", binary);
    }
    return 0;
}