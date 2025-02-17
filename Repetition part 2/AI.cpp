// Split

#include <stdio.h>

int main () {
    int T, N[100001] = {}, sum = 0, sum_split = 0;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++){
        int test, flag = 0;
        scanf("%d", &test);
        for(int i = 0; i < test; i++){
            scanf("%d", &N[i]);
            sum += N[i];
        }

        for (int i = 0; i < test; i++){
            sum -= N[i], sum_split += N[i];
            if (sum == sum_split){
                flag = 1;
                break;
            }
        }

        if (flag == 1){
            printf("Case #%d: Yes\n", tc);
        } else {
            printf("Case #%d: No\n", tc);
        }
        
        sum_split = 0;
        sum = 0;
    }
    return 0;
}