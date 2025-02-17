#include <stdio.h>

int main(){
    float a,b,c,d, total;
    for (int i = 0; i < 3; i++)
    {
        scanf("%f %f %f %f", &a, &b, &c, &d);
        total = (a/1*2)+(b/2*4)+(c/3*6)+(d/4*4);
        printf("%.2f\n", total);
    }
    
    return 0;
}