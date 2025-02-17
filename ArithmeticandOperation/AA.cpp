#include <stdio.h>

int main(){
    double a,b,c,d;
    int t;
    scanf("%d", &t);
    double sum;
    for (int i = 0; i < t; i++){
        scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
        sum = (2*a/1) + (4*b/2) + (4*c/3) + (2*d/4);
        printf("%.2lf\n", sum);
    }

    return 0;
}