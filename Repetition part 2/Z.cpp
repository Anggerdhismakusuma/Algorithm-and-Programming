// Playing Monopoly

#include <stdio.h>

int main(){
    int n, k, total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &k);
        total += k;
        if (total == 30){
            total = 10;
        } else if (total == 12){
            total = 28;
        } else if (total == 35){
            total = 7;
        } else if (total >= 40){
            total -= 40;
        }
    }
    printf("%d\n", total);
    return 0;
}