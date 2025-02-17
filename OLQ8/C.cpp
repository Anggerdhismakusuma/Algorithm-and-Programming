#include <stdio.h>
#include <string.h>

int func(int z, int x, int mod) {
    int result = 1;
    z = z % mod;
    while (x > 0) {
        if (x % 2 == 1) {
            result = (result * z) % mod;
        }
        x = x >> 1;
        z = (z * z) % mod;
    }
    return result;
}

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        printf("File tidak ditemukan\n");
        return 1;
    }
    char line[101];
    int total_kosong = 0;
    while (fgets(line, sizeof(line), file)) {
        for (int i = 0; line[i] != '\0'; i++) {
            if (line[i] == ';' && (i == 0 || line[i-1] == ';')) {
                total_kosong++;
            }
        }
    }

    fclose(file);
    int kemungkinan = func(101, total_kosong, 1000000007);
    printf("%lld\n", kemungkinan);

    return 0;
}
