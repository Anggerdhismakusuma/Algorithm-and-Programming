// Emergency Exit

#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for (int tc = 1 ; tc <= T ; tc++){
        int length, nafas;
        scanf("%d %d", &length, &nafas);getchar();
        char plot[10005] = {};
        scanf("%s", &plot);

        int first = -1, last = -1, stair = 0;

        for (int j = 0 ; j < length ; j++){
            if (plot[j] == '1'){
                first = j+1;
                break;
            }
        }

        for (int j = length-1 ; j >= 0 ; j--){
            if (plot[j] == '1'){
                last = j;
                break;
            }
        }

        for (int j = 0; j < length ; j ++){
            if (plot[j] == '1'){
                stair++;
            }
        }

        printf("Case #%d: ", tc);
        if (nafas >= length){
            printf("Alive\n");
        }else if (last == -1){
            printf("Dead\n");
        }else if ((first <= nafas) && (length - last <= nafas) && (stair != 1)){
            printf("Alive\n");
        } else printf("Dead\n");
    }
    return 0;
}