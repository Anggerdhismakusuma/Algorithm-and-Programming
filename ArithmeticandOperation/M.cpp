#include <stdio.h>

int main(){
    double a, b, total;
    scanf("%d %d", &a, &b);
    total = a/b*100;
    printf("%.2lf%%\n", total);
    return 0;
}