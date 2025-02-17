// World Record Egg

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++){
        int n;
        scanf("%d", &n);
        printf("Case #%d: ", tc);
        if(n == 1){
            printf("0\n");
        } else if(n == 2){
            printf("1\n");
        } else {
            long long int hari1 = 0;
            long long int hari2 = 1;
            long long int harin;
            for (int i = 3; i <= n; i++){
                harin = hari1 + hari2;
                hari1 = hari2;
                hari2 = harin;
            }
            printf("%lld\n", harin);
        }
    }

    return 0;
}
