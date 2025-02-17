// Jojo draw triangle

#include <stdio.h>

int main(){
    int n, T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%d", &n);
        for (int i = 1; i <= n; i++){
            for(int j = n; j > i; j--){
                printf(" ");
            }
            for (int k = 1; k <= i; k++){
                printf("*");
            }
            puts("");
        }
    }
    
    return 0;
}