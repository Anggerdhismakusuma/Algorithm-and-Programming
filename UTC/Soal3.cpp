#include <stdio.h>

int main(){
    int X, Y, Z;
    int apel = 5000;
    int jeruk = 6000;
    int nanas = 7000;
    scanf("%d %d %d", &X, &Y, &Z);
    apel = apel * X;
    jeruk = jeruk * Y;
    nanas = nanas * Z;
    if (apel > jeruk && apel > nanas){
        printf("%d Apel\n", apel);
    } else if (jeruk > apel && jeruk > nanas){
        printf("%d Jeruk\n", jeruk);
    } else if (nanas > jeruk && nanas > apel){
        printf("%d Nanas\n", nanas);
    } else {
        puts("Cancel");
    }
    return 0;
}