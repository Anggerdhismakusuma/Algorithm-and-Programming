// Jellyfish Dance

#include <stdio.h>

int main(){
    int t, views[101] = {}, n, a, b;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &views[i]);
    }

    scanf("%d", &n);
    for (int tc = 0; tc < n; tc++){
        int sum = 0;
        scanf("%d %d", &a, &b);
        for(int i = a - 1; i <= b - 1; i++){
            sum += views[i];
        }
        printf("Case #%d: %d\n", tc + 1, sum);
    }
    return 0;
}