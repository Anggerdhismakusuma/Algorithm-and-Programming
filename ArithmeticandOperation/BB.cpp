#include <stdio.h>

int main(){
    int asg, mid, fin;
    float final;
    scanf("%d %d %d", &asg, &mid, &fin);
    final = (0.2*asg) + (0.3*mid) + (0.5*fin);
    printf("%.2f\n", final);
    return 0;
}