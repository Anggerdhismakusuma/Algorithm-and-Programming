// Climbing Stairs

#include <stdio.h>

int main(){
    int N, stairs[1001] = {};
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &stairs[i]);
    }

    for (int i = 0; i < N; i++){
        if((stairs[i] <= stairs[i-1] && i != 0)){
            printf("%d ", stairs[i-1]);
        }if (i == N-1){
            printf("%d\n", stairs[i]);
        }   
    }

    return 0;
}