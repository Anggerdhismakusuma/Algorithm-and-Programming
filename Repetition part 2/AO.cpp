// idontwannabeyouanymore

#include <stdio.h>

int main() {
    int T, length;
    char kata[101];
    scanf("%d", &T);
    for (int tc = 0; tc < T; tc++) {
        scanf("%d", &length); getchar();
        scanf("%[^\n]", kata); getchar();
        printf("Case #%d: ", tc+1);
        for (int i = 0; i < length; i++){
            if (kata[i] >= 'a' && kata[i] <= 'z') {
                printf("%c",kata[i]);
            } else {
                continue;
            }
        }
        printf("\n");
    }
return 0;
}