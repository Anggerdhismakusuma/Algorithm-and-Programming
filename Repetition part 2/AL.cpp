// Dragon Slayer

#include <stdio.h>

int main(){
    int N, M, bibi_power[100001] = {}, dragon_power[100001] = {}, max_bibi = -1, max_dragon = -1;
    scanf("%d %d", &N, &M);

    for(int j = 0; j < N; j++){
        scanf("%d", &bibi_power[j]); getchar();
        if (max_bibi < bibi_power[j]){
            max_bibi = bibi_power[j];
        }
    }

    for(int i = 0; i < M; i++){
        scanf("%d", &dragon_power[i]); getchar();
        if (max_dragon < dragon_power[i]){
            max_dragon = dragon_power[i];
        }
    }

    if (max_bibi > max_dragon){
        puts("The dark secret was true");
    } else {
        puts("Secret debunked");
    }

    return 0;
}