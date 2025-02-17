// Games

#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        int N, lili = 0, bibi = 0;
        scanf("%d", &N);
        getchar();
        for (int i = 0; i < N; i++){
            char A;
            scanf("%c", &A);
            if (A == 'L'){
                lili++;
            } else if (A == 'B'){
                bibi++;
            }
        }
        if (lili > bibi){
            puts("Lili");
        } else if (lili < bibi) {
            puts("Bibi");
        } else {
            puts("None");
        }
    }
    return 0;
}