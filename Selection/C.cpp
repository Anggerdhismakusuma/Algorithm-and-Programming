#include <stdio.h>

int main(){
    int t, gojo, bipay;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &gojo, &bipay);
        if (gojo > bipay)
        {
            printf("Case #%d: Go-Jo\n", i);
        } else if (gojo < bipay)
        {
            printf("Case #%d: Bi-Pay\n", i);

        }
           
    }
    

    return 0;
}