// Zoo

#include <stdio.h>

int main(){
    int N, animal, total = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &animal);
        total += animal;
    }
    printf("%d\n", total);
    return 0;
}
