#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char tanah[100001];
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("File tidak ditemukan\n");
        return 1;
    }
    fscanf(file, "%d\n", &N);
    fscanf(file, "%s", tanah);
    fclose(file);
    int panjang = 0;
    int temp = 0;
    for (int i = 0; i < N; i++) {
        if (tanah[i] == '1') {
            temp++;
        } else {
            if (temp > panjang) {
                panjang = temp;
            }
            temp = 0;
        }
    }
    if (temp > panjang) {
        panjang = temp;
    }
    printf("%d\n", panjang);
    return 0;
}
