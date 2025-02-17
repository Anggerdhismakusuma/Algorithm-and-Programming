// Hotel

#include <stdio.h>

int room[1000001] = {};
int temp[1000001] = {0};

int main(){
    int T;
    int count = 0;
    scanf("%d", &T); getchar();
    for (int i = 0; i < T; i++){
        scanf("%d", &room[i]); getchar();
    }

    for(int i = 0; i < T; i++){
        int flag = 0;
        for(int j = 0; j < count; j++){
            if(room[i] == temp[j]){
                flag = 1;
                break;
            }
        }

        if(!flag){
            temp[count] = room[i];
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

