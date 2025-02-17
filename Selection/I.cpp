#include <stdio.h>

int main(){
    int t, price, persCashback, cashbackMax = 0, cashback = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &price, &persCashback, &cashbackMax);
        cashback = price * persCashback/100;
        if (cashback > cashbackMax)
        {
            printf("Case #%d: %d\n", i, cashbackMax);
        } else printf("Case #%d: %d\n", i, cashback);
        
    }
    
    return 0;
}