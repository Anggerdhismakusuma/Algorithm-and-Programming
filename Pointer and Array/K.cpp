// Reverse String

#include <stdio.h>
#include <string.h>

int main(){
    int N;
    char s[10001];
    scanf("%d", &N);
    for (int tc = 0; tc < N; tc++){
        scanf("%s", s);
        int len = strlen(s);
        printf("Case #%d : ", tc + 1);
        for(int i = len - 1; i >= 0; i--){
            printf("%c", s[i]);
        }
    printf("\n");
    }
    return 0;
}