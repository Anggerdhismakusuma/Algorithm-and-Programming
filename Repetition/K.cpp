#include <stdio.h>

int main(){
    int n, jo, li, bi, other;
    scanf("%d", &n);
    scanf("%d %d %d", &jo, &li, &bi);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &other);
        int avg = (jo + li + bi + other) / (3 + n);
        if (jo < avg)
        {
            printf("Jojo tidak lolos\n");
        } else if (li < avg)
        {
            printf("Lili tidak lolos\n");
        } else if (bi < avg)
        {
            printf("Bibi tidak lolos\n");
        } else if (jo >= avg)
        {
            printf("Jojo lolos\n");
        } else if (li >= avg)
        {
            printf("Lili lolos\n");
        } else if (bi >= avg)
        {
            printf("Bibi lolos\n");
        }       
    }
    
    return 0;
}