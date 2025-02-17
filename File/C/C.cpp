#include <stdio.h>

int main(){
    FILE* fptr = fopen("testdata.in", "r");
    int a, b;
    fscanf(fptr, "%d %d\n", &a, &b);
    printf("%d\n", a+b);
    return 0;
}