// A to B

#include <stdio.h>

int func(int A, int B){
    if (A == B) return 1;
    else if (A == 1) return 0;
    else if (A % 2 == 0) func(A/2, B);
    else if (A % 2 != 0) func(A*3+1, B);
}

int main(){
    int T;
    scanf("%d", &T);
    for(int tc = 1; tc <= T; tc++){
        int A, B;
        scanf("%d %d", &A, &B);
        if (func(A, B)){
            printf("Case #%d: YES\n", tc);
        } else {
            printf("Case #%d: NO\n", tc);
        }
    }
    return 0;
}