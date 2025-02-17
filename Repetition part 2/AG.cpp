// Pancakes

#include <stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++){
        scanf("%d", &n);
        long long int num = 1;
        printf("Case %d:", tc);

        for (int i = 0; i < n; i ++){
            num += i;
            printf(" %lld", num);
        }
        puts("");
    }
    return 0;
}