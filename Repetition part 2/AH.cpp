// Length

#include <stdio.h>
#include <string.h>

int main(){
    int T;
    long long int length;
    char N[10000];
    scanf("%d", &T);
    for (int i = 1; i <= T; i++){
        scanf("%s", &N);
        length = strlen(N);
        printf("Case #%d: %d\n", i, length);
    }
    return 0;
}