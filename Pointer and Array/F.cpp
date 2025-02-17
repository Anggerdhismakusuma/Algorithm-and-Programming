// Girl

#include <stdio.h>
#include <string.h>

    char name[1000001];
    char temp[1000001];

int main(){
    int T;
    scanf("%d", &T);
    for(int tc = 0; tc < T; tc++){
        int count = 0;
        scanf("%s", name);
        int len = strlen(name);
        for(int i = 0; i < len; i++){
            int flag = 0;
            for(int j = 0; j < count; j++){
                if(name[i] == temp[j]){
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                temp[count] = name[i];
                count++;
            }
        }
        printf("Case #%d: ", tc+1);
        if(count % 2 == 0){
            printf("Yay\n");
        } else {
            printf("Ewwww\n");
        }
    }
    return 0;
}