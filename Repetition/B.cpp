#include <stdio.h>

int main(){
    int n, num, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
        if (sum == 12)
        {
            sum = 28;
        } else if (sum == 30)
        {
            sum = 10;
        } else if (sum == 35)
        {
            sum = 7;
        } else if (sum >= 40)
        {
            sum -= 40;
        }    
        
    }
    printf("%d\n", sum);

    return 0;
}