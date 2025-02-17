#include <stdio.h>

int main(){
    int phy, mag, pur;
    float damage;
    scanf("%d %d %d", &phy, &mag, &pur);
    damage = (0.2*phy) + (0.3*mag) + (0.5*pur);
    printf("%.2f\n", damage);
    return 0;
}