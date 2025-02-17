#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &m, &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", m++);
    }
    
    return 0;
}