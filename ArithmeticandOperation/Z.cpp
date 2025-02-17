#include <stdio.h>

int main(){
    int t, a, b;
    double total;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        total = (a*0.01)*b;
        printf("%.2lf\n", total);
    }
    
    return 0;
}