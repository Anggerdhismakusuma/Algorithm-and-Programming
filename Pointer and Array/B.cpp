// What did I wrong

#include <stdio.h>

int main(){
    int t, length, bahanDimiliki[100001] = {}, bahanDibutuhkan[100001] = {};
    scanf("%d", &t); getchar();
    for (int tc = 0; tc < t; tc++){
        scanf("%d", &length); getchar();
        int total[length + 5] = {};
        
        for(int i = 0; i < length; i++){
            scanf("%d", &bahanDibutuhkan[i]); getchar();
        }

        for(int i = 0; i < length; i++){
            scanf("%d",  &bahanDimiliki[i]); getchar();
        }

        printf("Case #%d: ", tc+1);
        for (int i = 0; i < length; i++){
            total[i] = bahanDibutuhkan[i] - bahanDimiliki[i];
            if(i == length-1){
                printf("%d", total[i]);
            }
            else printf("%d ", total[i]);
        }
        printf("\n");
    }
    return 0;
}