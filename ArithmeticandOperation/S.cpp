#include <stdio.h>

int main(){
    double l, b, h;
    scanf("%lf %lf %lf", &l, &b, &h);
    double luasSegitiga, luasPersegiPanjang;
    luasSegitiga = (b * h);
    luasPersegiPanjang = 3*(l*b);
    printf("%.3lf\n",luasSegitiga+luasPersegiPanjang);
        
    return 0;
}
