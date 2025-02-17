#include <stdio.h>

int main(){
    int t;
    int a, b;
    int banana[100001];
    scanf("%d", &t); getchar();
    for(int i = 1; i <= t; i++){
        int count = 0;
        scanf("%d %d", &a, &b);
        for(int j = 0; j < a; j++){
            scanf("%d", &banana[j]);
        }

        for(int j = 0; j < a; j++){
            if(banana[j] >= b){
                count++;
            }
        }

        printf("Case #%d: %d\n", i, count);
    }
    return 0;
}