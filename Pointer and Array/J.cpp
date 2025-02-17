// Char to ascii

#include <stdio.h>
#include <string.h>

int main(){
    int T;
    char S[10001];
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%s", S);
        int len = strlen(S);
        printf("Case %d: ", i + 1);
        for(int j = 0; j < len; j++){
            if (j == len - 1){
                printf("%d", S[j]);
            } else {
                printf("%d-", S[j]);
            }
        }
        printf("\n");
    }
    return 0;
}