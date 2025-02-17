#include <stdio.h>

int main(){
    double tabungan, bunga, jmlBunga;
    scanf("%lf %lf", &tabungan, &bunga);
    for (int i = 0; i < 3; i++){
        jmlBunga = tabungan / 100 * bunga;        
        tabungan += jmlBunga;
    }
    printf("%.2lf\n", tabungan);
    
    return 0;
}