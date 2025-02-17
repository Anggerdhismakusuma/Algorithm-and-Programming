// Weird Shape

#include <stdio.h>

int main(){
    int T, n;
    scanf("%d", &T); getchar();
    for (int tc = 0; tc < T; tc++){
        scanf("%d", &n); getchar();
        for (int j = 0; j < n; j++){    
            for (int k = 0; k < n; k++){
                if(j == 0 || j == n - 1 || k == 0 || k == n - 1 || j==k || j==n-k-1){
                    printf("*");
                } 
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}