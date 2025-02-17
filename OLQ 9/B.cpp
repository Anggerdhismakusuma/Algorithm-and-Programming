#include <stdio.h>
#include <string.h>

void ascending(char arr[][101], int n) {
    char temp[101];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

void descending(char arr[][101], int N) {
    char temp[101];
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) < 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int N, X;
    scanf("%d", &N);
    char words[N][101];
    for (int i = 0; i < N; i++) {
        scanf("%s", words[i]);
    }
    scanf("%d", &X);
    if (X == 0) {
        ascending(words, N);
    } else {
        descending(words, N);
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
