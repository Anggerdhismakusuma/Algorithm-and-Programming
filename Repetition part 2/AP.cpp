// pigw kizq ixi siuc

#include <stdio.h>

int main() {
    int T, length;
    long long int K;
    char s[100];
    scanf("%d", &T);
    for (int tc = 1; tc <= T; tc++) {
        scanf("%d %lld", &length, &K); getchar();
        scanf("%[^\n]", s);
		printf("Case #%d: ", tc);
        for (int i = 0; i < length; i++) {         
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = ((s[i] - 'a') + K) % 26 + 'a';
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = ((s[i] - 'a') + K) % 26 + 'a';
            }
            putchar(s[i]);
        }
        printf("\n");
    }
}