#include <stdio.h>

int main(){
    int t, a; 
    float reamur, fahrenheit, kalvin;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a);
        reamur = a * 0.8;
        fahrenheit = (1.8 * a) + 32;
        kalvin = a + 273;
        printf("%.2f %.2f %.2f\n", reamur, fahrenheit, kalvin);
    }

    
    return 0;
}