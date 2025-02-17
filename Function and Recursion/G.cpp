// A Man, A Plan, A Canal, Panama

#include <stdio.h>
#include <string.h>

void checkPalindrome(char kata[]){
    int l = strlen(kata);
    int flag = 1;
    for (int i = 0, j = l - 1; i <= j; i++, j--) {
        if (kata[i] != kata[j]){
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("yes");
    } else {
        printf("no");
    }
}

int main(){
    int t;
    scanf("%d", &t); getchar();
    for (int tc = 0; tc < t; tc++){
        char kata[1001];
        scanf("%s", kata); getchar();
        printf("Case #%d: ", tc + 1);
        checkPalindrome(kata);
        printf("\n");
    }
    return 0;
}