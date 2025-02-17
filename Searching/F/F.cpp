#include <stdio.h>

int main(){
    int n;
    int a[10001];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    bool flag;
    for(int i = 0; i < n; i++){
        flag = true;
        if(a[i] == 1){
            flag = false;
            break;
        }
    }

    if (flag) puts("easy");
    else puts("not easy");
    return 0;
}