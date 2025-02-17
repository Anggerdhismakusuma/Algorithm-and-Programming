// Odd and Even

#include <stdio.h>

int main(){
    int t, n, k, odd = 0, even = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d", &n);
        for (int i = 0; i < n; i++){
            scanf("%d", &k);
            if (k % 2 == 0){
                even++;
            } else if (k % 2 == 1){
                odd++;
            }
        }
        printf("Odd group : %d integer(s).\n", odd);
        printf("Even group : %d integer(s).\n\n", even);
        odd = 0;
        even = 0;
    }

    return 0;
}