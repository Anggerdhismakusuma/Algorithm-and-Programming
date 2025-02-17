#include <stdio.h>

int main(){
    char n[999], n1[999], n2[999];
    scanf("%[^\n]", &n); getchar();
    scanf("%[^\n]", &n1); getchar();
    scanf("%[^\n]", &n2); getchar();
    printf("%c\n", n[1]);
    printf("%c\n", n1[1]);
    printf("%c\n", n2[1]);
    return 0;
}