#include <stdio.h>

int main(){
    float a,b;
    double disc;
    scanf("%f %f", &a, &b);
    disc = (a-b)*100/a;
    printf("%.2lf%%\n", disc);
    return 0;
}
