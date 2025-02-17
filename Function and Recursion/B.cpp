// Sum of the leaves

#include <stdio.h>

void func(int leaves[], int N, int index, int sum){
    int count = 0;
    sum += leaves[index];
    if (index * 2 <= N){
        func(leaves, N, index*2, sum);
        count++;
    } if (index * 2 + 1 <= N){
        func(leaves, N, index*2 + 1, sum);
        count++;
    } if (count == 0){
        printf("%d\n", sum);
    }
}

int main(){
    int T;
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++){
        int N;
        scanf("%d", &N);

        int leaves[101];
        for (int i = 1; i <= N; i++){
            scanf("%d", &leaves[i]);
        }

        int index = 1, sum = 0;
        printf("Case #%d:\n", tc);
        func(leaves, N, index, sum);
    }
}