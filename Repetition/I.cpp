#include <stdio.h>

int main(){
    int cage, anim, sum = 0;
    scanf("%d", &cage);
    for (int i = 0; i < cage; i++)
    {
        scanf("%d", &anim);
        sum += anim;
    }
    printf("%d\n", sum);
    return 0;
}