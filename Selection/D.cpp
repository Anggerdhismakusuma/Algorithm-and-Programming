#include <stdio.h>

int main(){
    long long int t, n, m;
    scanf("%lld", &t);
    for (int i = 1; i <= t; i++){
        scanf("%lld %lld", &n, &m);
        printf("Case #%d: ", i);
        if ((n*m)%2==0)
        {
            printf("Party time!\n");
        } else
            printf("Need more frogs\n");
    }
    
    return 0;
}