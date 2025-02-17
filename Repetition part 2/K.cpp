// Triangle

#include <stdio.h>

int main(){
    int n, T;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%d", &n);
        printf("Case #%d:\n", i);
        for (int i = 1; i <= n; i++){
            for(int j = n; j > i; j--){
                printf(" ");
            }
            for (int k = 1; k <= i; k++){
                if(n % 2 == 1){
                    if(k % 2 == 1){
                        printf("*");
                    } else {
                        printf("#");
                    }
                } else if (n % 2 == 0){
                    if(k % 2 == 1){
                        printf("#");
                    } else {
                        printf("*");
                    }
                }
            }
            puts("");
        }
    }
    
    return 0;
}