// Secret Code

#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int tc = 1; tc <= T; tc++) {
        int Q;
        char string[1001];
        scanf("%d %s", &Q, string);
        
        int length = strlen(string);
        for (int i = 0; i < Q; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            a--; 
            b--;
            while (a < b) {
                char temp = string[a];
                string[a] = string[b];
                string[b] = temp;
                a++;
                b--;
            }
        }

        // Menampilkan hasil
        printf("Case #%d: %s\n", tc, string);
    }

    return 0;
}
