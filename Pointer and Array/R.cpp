// Playing with string

#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int tc = 1; tc <= T; tc++) {
        char string[1001];
        scanf("%s", string); getchar();

        int M;
        scanf("%d", &M); getchar();

        char change[26] = {0};

        for (int i = 0; i < M; i++) {
            char a, b;
            scanf("%c %c", &a, &b); getchar();
            for (int j = 0 ; string[j] != '\0' ; j++){
                if (string[j] == a) string[j] = b;
            }
        }
        printf("Case #%d: %s\n", tc, string);
    }
    return 0;
}