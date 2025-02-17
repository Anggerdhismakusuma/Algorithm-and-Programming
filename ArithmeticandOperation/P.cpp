#include <stdio.h>

int main(){
    double disc, priceDisc, priceOri;
    for (int i = 0; i < 4; i++)
    {
        scanf("%lf %lf", &disc, &priceDisc);
        priceOri = priceDisc / (1-disc/100);
        printf("$%.2lf\n", priceOri);
    }

    return 0;
}