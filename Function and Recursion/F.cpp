// eltit a si sihT
#include <stdio.h>
#include <string.h>

void reverseString(char string[]){
    int len = strlen(string);
    for(int i = len - 1; i >= 0; i--){
        printf("%c", string[i]);
    }
    printf("\n");
}

int main(){
    int T;
    scanf("%d", &T); getchar();
    for (int tc = 1; tc <= T; tc++){
        char S[1001];
        scanf("%[^\n]", S); getchar();
        printf("Case #%d: ", tc);
        reverseString(S);
    }
    return 0;
}