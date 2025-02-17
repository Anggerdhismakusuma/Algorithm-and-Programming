// Maximum

#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int tc = 0; tc < T; tc++){
        int length;
        int max1 = -99999999;
        int max2 = -99999999;
        scanf("%d", &length);
        int arr[length+5];
        for(int i = 0; i < length; i++){
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < length; i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2) {
                max2 = arr[i];
            }
        }
        int total = max1 + max2;
        // printf("%d %d\n", max1, max2);
        printf("Case #%d: %d\n", tc+1, total);
    }
    return 0;
}