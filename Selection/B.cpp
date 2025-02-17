#include <stdio.h>

int main(){
    int t;
    int k, n, m;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &k, &n, &m);
        if (n + m >= k)
        {
            printf("Case #%d: yes\n", i);
        } else if (n + m < k){
            printf("Case #%d: no\n", i);
        }
    }
    
    return 0;
}