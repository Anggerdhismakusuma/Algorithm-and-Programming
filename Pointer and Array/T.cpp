// Best Message

#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++){
        char message[10001];
        scanf("%s", message);
        int len = strlen(message);
        int key[len+5] = {0};
        for(int i = 0; i < len; i++){
            if (message[i] >= 'A' && message[i] <= 'D'){
                key[i] = message[i] - 'A';
                message[i] = 'A';
            } else if (message[i] >= 'E' && message[i] <= 'H'){
                key[i] = message[i] - 'E';
                message[i] = 'E';
            } else if (message[i] >= 'I' && message[i] <= 'N'){
                key[i] = message[i] - 'I';
                message[i] = 'I';
            } else if (message[i] >= 'O' && message[i] <= 'T'){
                key[i] = message[i] - 'O';
                message[i] = 'O';
            } else if (message[i] >= 'U' && message[i] <= 'Z'){
                key[i] = message[i] - 'U';
                message[i] = 'U';
            }
        }
        printf("Case #%d:\n", tc);
        printf("%s\n", message);
        for (int i = 0 ; i < len ; i++){
            if(i == len - 1) printf("%d\n", key[i]);
            else printf("%d", key[i]);
        }
    }
    return 0;
}