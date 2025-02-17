// IP Man

#include <stdio.h>
#include <string.h>

int main(){
    int t;
    char ip[105];
    scanf("%d", &t);
    for (int tc = 1; tc <= t; tc++){
        scanf("%s", ip);
        int count = 0;
        int l = strlen(ip);
        int flag = 0;
        for (int i = 0; i < l; i++) {
            if (ip[i] == '.') {
                count++;
                if (i < l - 1 && ip[i+1] == '.') {
                    flag = 1;
                }
            }
        }
        if (ip[0] == '.' || ip[l-1] == '.') {
            flag = 1;
        }
        if (flag == 0 && count == 5) {
            printf("Case #%d: YES\n", tc);
        } else {
            printf("Case #%d: NO\n", tc);
        }
    }
    

    return 0;
}