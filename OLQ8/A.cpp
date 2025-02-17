#include <stdio.h>

int main() {
    int N;
    FILE *file = fopen("testdata.in", "r");
    fscanf(file, "%d\n", &N);
    long long int kayu[1001];
    for(int i = 0; i < N; i++) {
        fscanf(file, "%lld", &kayu[i]);
    }
    fclose(file);
    for (int i = 0; i < N; i++) {
        int swapped = 0; 
        for (int j = 0; j < N - 1; j++) {
            if (kayu[j] > kayu[j + 1]) {
                int temp = kayu[j];
                kayu[j] = kayu[j + 1];
                kayu[j + 1] = temp;

                swapped = 1; 
            }
        }
        if ( !swapped ) break; 
    }
    int flag = 0;
    for(int i = 0; i < N - 2; i++) {
        if(kayu[i] + kayu[i + 1] > kayu[i + 2]) {
            flag = 1;
            break;  
        }
    }
    
    if(flag) {
        printf("YES");
    } else {
        printf("NO");
    }
    printf("\n");

    return 0;
}