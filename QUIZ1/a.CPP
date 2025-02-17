#include <stdio.h>

int main () {
    char kalimat1kata1[101], kalimat1kata2[101], kalimat1kata3[101]; 
    char kalimat2kata1[101], kalimat2kata2[101], kalimat2kata3[101];
    scanf("%s %s %s", kalimat1kata1, kalimat1kata2, kalimat1kata3); getchar();
    printf("%sszs %sszs %sszs\n", kalimat1kata1, kalimat1kata2, kalimat1kata3);
    scanf("%s %s %s", &kalimat2kata1, &kalimat2kata2, &kalimat2kata3); getchar();
    printf("%sszs %sszs %sszs\n", kalimat2kata1, kalimat2kata2, kalimat2kata3);
    
    return 0;
}