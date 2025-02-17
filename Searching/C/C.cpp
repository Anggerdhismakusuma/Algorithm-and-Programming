#include <stdio.h>

int main(){
    int n, m;
    int a[1005], b[1005];
    scanf("%d %d", &n, &m);
    
    if(n == 0){
        printf("Maximum number is -1\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(b[i] == a[j]){
                a[j] = 0;
            }
        }
    }

    int maxNum = -1;
    for(int i = 0; i < n; i++){
        if(a[i] > maxNum && a[i] != 0) maxNum = a[i];
    }
    printf("Maximum number is %d\n", maxNum);
}