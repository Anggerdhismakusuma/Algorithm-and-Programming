#include <stdio.h>

int main(){
    int t;
    double a, b, total;
    scanf("%d", &t); getchar();
    for (int i = 0; i < t; i++)
    {
        scanf("%lf %lf", &a, &b); getchar();
        total = a * b / 360;
        printf("%.2lf\n", total);
    }
    
    return 0;
}