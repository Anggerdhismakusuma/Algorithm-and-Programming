#include <stdio.h>
#include <string.h>

struct Plant{
    int num;
    char bunga[1001]; 
};

void swap(Plant *a, Plant *b){
    Plant temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(Plant kembang[], int n){
    int minIdx = 0;
    for(int i = 0; i < n-1; i++){
        minIdx = i;
        for(int j = i + 1; j < n; j++){
            if(strcmp(kembang[j].bunga, kembang[minIdx].bunga) < 0){
                minIdx = j;
            }
        }
        swap(&kembang[i], &kembang[minIdx]);
    }
}

int main(){
    Plant kembang[1001];
    FILE* input = fopen("testdata.in", "r");
    int n;
    fscanf(input, "%d\n", &n);
    for(int i = 0; i < n; i++){
        fscanf(input, "%d#%[^\n]\n", &kembang[i].num, kembang[i].bunga);
    }
    BubbleSort(kembang, n);
    for(int i = 0; i < n; i++){
        printf("%d %s\n", kembang[i].num, kembang[i].bunga);
    }
    fclose(input);
    return 0;
}