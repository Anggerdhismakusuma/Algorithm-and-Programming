// Pencil Case
#include <stdio.h>

int main(){
    int T;
    const double PHI = 3.14;
    double R, H, surfaceArea;
    scanf("%d", &T);
    for (int i = 0; i < T; i++){
        scanf("%lf %lf", &R, &H);
        surfaceArea = 2 * PHI * R * (R + H);
        printf("Case #%d: %.2lf\n", i + 1, surfaceArea);
    }
    return 0;
}