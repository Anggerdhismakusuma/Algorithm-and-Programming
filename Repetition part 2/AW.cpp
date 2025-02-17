// Present

#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int tc = 0; tc < t; tc++){
        int min = 0, count = 0, n, a;
        scanf("%d", &n);
        for (int i = 0; i < n; i++){
            scanf("%d", &a);
            if (a > min){
                min = a;
                count = 1;
            } else if (a == min){
                count++;
            }
        }
        printf("Case #%d: %d\n", tc+1, count);
    }
    return 0;
}