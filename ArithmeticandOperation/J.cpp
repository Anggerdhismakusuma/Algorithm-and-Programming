#include <stdio.h>

int main(){
    float a, b;
    float total;
    scanf("%d %d", &a, &b);
    total = b / a*100; 
    printf("%.4f%%\n", total);

    return 0;
}